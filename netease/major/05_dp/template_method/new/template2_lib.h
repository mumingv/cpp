/***********************************************************
 *     FileName: template2_lib.h
 *         Desc: 模板模式
 *       Author: Jie Yin
 *        Email: mumingv@163.com
 *     HomePage: https://github.com/mumingv
 *      Version: 0.0.1
 *   LastChange: 2016-11-26 20:24:40
 *      History:
 ***********************************************************/

//程序库开发人员
class Library {
public:
	Library() {}  // 构造函数
    void run();  // 稳定，template method
	virtual ~Library() {}  // 析构函数需要使用纯虚函数，以使delete时能调用正确的对象
protected:
    void step1();  // 稳定
    void step3();  // 稳定
    void step5();  // 稳定

    virtual bool step2() = 0;  // 变化，使用纯虚函数 
    virtual void step4() = 0;  // 变化，使用纯虚函数 
};
