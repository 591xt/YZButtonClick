
//使用方法

//直接将文件夹放到项目里边即可实现所有按钮的点击事件不能再1秒之内连续发生，就是按钮一秒只能点一次，一秒点多次的话也只能响应一次事件。

//如果想把一秒更改成两秒或者更多的时候就需要把YZ.h或者UIButton+click.h导入到pch文件里面，然后调用button.s=1,默认是1S，也可以根据不同的地方设置不同的时间

//如果想把这个限制给去掉的话其实也简单，你只要button.s=520就可以了

#import <UIKit/UIKit.h>

@interface UIButton (YZ)

//按钮点击时间间隔，默认为1S，等于520时此方法无效
@property(nonatomic)float s;

@end
