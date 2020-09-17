# example
C语言学习记录
知识点总结：

#1 linux命令行命令
	1. vim进入编辑界面:
	 1.1 i或enter : 进入编辑模式
	 1.2 esc : 退出编辑模式
	 1.3 shift+: : 输入指令
	  1.3.1 q : 不编辑的情况下退出
	  1.3.2 q! : 编辑的情况下退出
	  1.3.3 ! : 强制退出
	  1.3.4 wq : 保存并退出
	2. sudo : 获取root权限
	3. gcc : linux编译工具 
	 3.1 gcc test.c -o test : 将test.c文件编译,并另存为test
	4. ./test : 运行test
	5. git的用法总结:
	 5.1 配置git
	  5.1.1 首先安装git
	  	sudo apt install git
	  5.1.2 初始化git本地仓库
	 	 git init
	  5.1.3 关联git账号
	 	 git config --global user.name "username"
	 	 git config --global user.email "email"
	  5.1.4 将本地文件夹与远程仓库关联
	 	 git remote add origin https://github.com/username/repositoryName
	 5.2 使用git更新/提交代码
	  5.2.1 更新
	  	git pull origin master
	  5.2.2 将文件夹内的文件添加到仓库中
	  	git add /home/chen/git/FishC
	  	git add .
	  5.2.3 提交信息
	  	git commit -m "C first commit"
	  5.2.4 推送到远程master分支
	  	git push -u origin master
	6. 命令行的特殊用法
	 6.1 gcc test.c -o test && ./test : 编译test.c另存为test并直接运行test
	
#2 C语言语法
##s1e1
	1. #include <stdio.h> : 预处理头文件
	2. printf("") : C语言打印,f:format 格式化
##s1e2
	1. fopen("file path","method") : 操作一个文件，method:[r:读；w:写]
	2. fgets(b,1000,f) : 
##s1e3
	1. 转义字符
	 1.1 \n 换行符
	 1.2 \t 制表符
	2. \n作用:在printf中表示换行,同时在代码中,有连接两行的作用,将\n前后两行看作一个整体	
##s1e4
	1. C关键字
	 1.1 char : 字符型,占用一个字节
	 1.2 int : 整型,通常反映所用计算机中整数的最自然长度
	 1.3 float : 单精度浮点型
	 1.4 double : 双精度浮点型
	2. 格式输出
	 2.1 %d : 整型
	 2.2 %ld : 长整型输出
	 2.3 %u : 以十进制数输出unsigned型数据(无符号数)
	 2.4 %s : 字符串
	 2.5 %c : 字符型
	 2.6 %f : 用来输出实数，以小数形式输出
	 2.7 %.2f : 2位小数的单精度浮点型
	 2.8 %.9f或%11.9f : 9位小数的双精度浮点型(共11位)
##s1e5
	1. 宏定义
	 1.1 语法 : #define 标识符 常量
	 1.2 例子 : #define NAME "陈依凡"
	 1.3 知识点
	  1.3.1 #define 为预处理命令
	  1.3.2 标识符需要全部大写,在程序中,该标识符即代表常量值
	  1.3.3 结尾不可以用";",否则分号也被定义为常量
	  
#3 其他知识点
	1. 字符串结尾处有一个隐藏字符 \0 ,用于标记字符串结尾,用于计算字符串长度
