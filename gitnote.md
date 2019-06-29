#git note 


在Linux上安装Git

```
$ sudo apt-get install git
```

安装完成后，还需要最后一步设置，在命令行输入

```
$ git config --global user.name "Your Name"
$ git config --global user.email "email@example.com"
```
创建版本库

```
$ mkdir learngit
$ cd learngit
$ git init
Initialized empty Git repository in /Users/michael/learngit/.git/
```

添加文件到仓库(暂存区)
```
$ git add readme.txt
```

把文件提交到仓库(master分支上)
```
$ git commit -m "wrote a readme file"
```

查看状态
```
$ git status
```

查看提交历史
```
$ git log
```

查看命令历史

```
$ git reflog
```


版本回退
首先，Git必须知道当前版本是哪个版本，在Git中，用HEAD表示当前版本，也就是最新的提交1094adb...，上一个版本就是HEAD^，上上一个版本就是HEAD^^，当然往上100个版本写100个^比较容易数不过来，所以写成HEAD~100。

```
$ git reset --hard HEAD^

```

从版本库复原文件
```
$ git checkout --file

```


上传到云端

```
git push -u origin master

```





