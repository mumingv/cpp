/***********************************************************
 *     FileName: fork.cpp
 *         Desc: 观察fork出来的子进程读取的全局变量和父进程是否为同一个
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-09-29 15:00:29
 *      History:
 ***********************************************************/

/* 
 * 几点说明：
 * 1. 进程中全局变量的地址是虚拟地址(线性地址)而不是物理地址(总线地址);
 * 2. fork时，子进程完全拷贝了整个虚拟地址空间，所以父子进程中全局变量的虚拟地址都是一样的(见下面的cout打印);
 * 3. 写时复制：如果父/子进程没有对全局变量进行写操作，则父/子进程全局变量的物理地址是同一个；
 *    如果父/子进程中发生对全局变量的写操作，则会在物理上复制一份全局变量供自己使用；
 * 4. 结论：父子进程使用的全局变量都是自己的(未发生写操作则使用一份，发生写操作则复制一份给自己使用)
 */

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <iostream>

int main()
{
    int x = 5;

    pid_t pid = fork (); 

    if (0 == pid)
    {   
        // 子进程
        std::cout << "pid = " << pid << std::endl;
        x = 6;
        std::cout << "x = " << x << " &x = " << &x << std::endl;
    }   
    else if (pid > 0)
    {   
        // 父进程
        std::cout << "pid = " << pid << std::endl;
        x = 7;
        std::cout << "x = " << x << " &x = " << &x << std::endl;
    }   
    else 
    {   
        std::cerr << "Error" << std::endl;
    }   

    sleep(1);

    // 父进程和子进程中: 全局变量x的虚拟地址(线性地址)是一样的; 但物理地址是不一样的, 因为打印出来的值不一样
    // 父进程：pid = 26087 x = 7 &x = 0x7ffff3807b70
    // 子进程：pid = 0 x = 6 &x = 0x7ffff3807b70
    if (0 == pid) {
        // 子进程
        for (int i = 0; i < 10; i++) {
            std::cout << "pid = " << pid;
            std::cout << " x = " << x << " &x = " << &x << std::endl;
        }
    }
    if (pid > 0) {
        // 父进程
        for (int i = 0; i < 10; i++) {
            std::cout << "pid = " << pid;
            std::cout << " x = " << x << " &x = " << &x << std::endl;
        }
    }
    exit (0);
}
