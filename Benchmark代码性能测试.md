# 代码执行效率测试
源于[SA-MP论坛原帖](https://sampforum.blast.hk/showthread.php?tid=218491) 作者：Slice，Nero_3D

## 使用方法：
Benchmark定义:
```pawn
#define Benchmark(%0,%1) \
    static _i;\
    for(new _t = GetTickCount(), _c; _t; ) \
        if(_t != GetTickCount()) \
            for(_i = _t = GetTickCount(); _t; _i = GetTickCount()) \
                if((_i - _t) == (%0)) \
                    for(_t = GetTickCount(); _t; ) \
                        if(_t != GetTickCount()) \
                            for(_i = _t = GetTickCount(); ; ++_c, _i = GetTickCount()) \
                                if((_i - _t) == (%0)) { \
                                    printf(" 执行性能测试:%1, 平均执行 %.2f 次/毫秒.", floatdiv(_c, (%0))); \
                                    _t = 0; \
                                    break; \
                                } else
```
开始测试
```pawn
//在Benchmark花括号内放入你需要测试的代码/函数
Benchmark(1000, "TestA")
{
    Test();
}
```
