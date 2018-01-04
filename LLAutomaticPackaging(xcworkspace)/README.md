# fir自动打包脚本 - - FirUploadScripts




本文达成的目标是：终端输入一条命令

```
bash -l ./xcodebuild_dis_config.sh
```

#### 一 准备环境和资源

首先说下所需要的环境：`Xcode9` `fir` 以及系统的`rvm`

贴一下`fir`的安装方式，也可以去他们官网的[`GitHub`](https://github.com/FIRHQ/fir-cli/blob/master/doc/install.md)去查看。使用的是`ruby`来进行的安装：

```
$ ruby -v # > 1.9.3
$ gem install fir-cli
```

其次在fir的官网申请账号并在个人中心获取`API Token`记下来。

[`fir官网`](https://fir.im/)


#### 二 配置证书

这一部分我就不详细介绍了，因为网上一搜一大堆。

我这里主要说下我们需要把什么记下来，首先登陆你的开发者账户

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-212632.png/600)

在`memberShip`栏目中记下`Team ID`

#### 三 下载脚本

题主已经将对应写好的脚本上传到了`GitHub`，`clone`到本地然后将工程下的`scripts`文件夹拖到项目的根目录下。

[GitHub下载地址](https://github.com/LiGuanWen/LGW_AutomaticPackaging.git)

工程结构举例如图：

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-213243.png/600)

#### 四 脚本内的文件配置

脚本内文件为

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-213601.png/600)

首先从命名就能看出可以分为两套，一套对应的是`development`的打包脚本，一套对应的是`distribution`的打包脚本。

`.sh`里面对应的写好的脚本，`plist`里面对应的是相应的打包时对应的xcodebuild的配置文件。

##### 关于`.sh`

这里就不把详细的脚本贴出来了，我只贴出来对应的需要我们进行配置的参数解释：

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-214310.png/600)

根据之前的贴图进行举例如下：

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-214714.png/600)

我们也可以自己自定义对应的更新日志，这个在脚本的最后进行配置。

##### 关于`.plist`

![](http://orsg2lmcy.bkt.clouddn.com/QQ20170807-215128.png/600)

`Team ID`就是前文提到需要记录的开发者账户的`Team ID`

`method`对应的打出什么种类的包，有效值有4个，对应手动打包的那几个选项：
```
app-store,
ad-hoc,
enterprise,
development
```

那么对应的我们在打`development`的包的时候在对应的脚本的.plist里面填写`development`，这里相信是很简单的就不过多赘述了，
如果对xcodebuild的plist配置想要详细研究，脚本也贴出了对应的key值都是用来干什么的，可以看一下。

#### 五 配置到这里，就完成了

打开`Terminal`

```
$ cd 工程目录/scripts/

$ bash -l ./xcodebuild_dis_config.sh

```
