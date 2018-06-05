# YZButtonClick

# 防止按钮短时间内重复点击

### 使用方法：

#### 1.下载该静态库并导入
 
 <https://github.com/YouZhiZheShiJingCheng/YZButtonClick>
 
 导入记得勾选拷贝，如图：
 
 ![Alt text](http://118.24.89.63:8080/1.png)
 
 ![Alt text](http://118.24.89.63:8080/3.png)
 

#### 2.配置工程      

TARGETS->Build Settings->Other Linker Flags 添加一个  -ObjC

#### 3.开始应用    

如果要修改或者取消时间限制的话UIButton + YZ.h导入到pch文件里面就行了。     

比如更改默认限制时间为1.5秒

UIButton * btn = [[UIButton alloc] init];

btn.s = 1.5;

这样的话就是按钮连续点击事件必须间隔1.5S

不想限制的话也简单，只要把上面的1.5改成520就可以了

btn.s=520;

这样的话按钮就不会有时间间隔的限制了。

默认情况下同一个按钮连续点击间隔为1S



