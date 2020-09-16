#s1e4
#变量

知识点总结：
#1 linux命令行命令
	1. git的用法总结:
	 1.1 配置git
	  1.1.1 首先安装git
	  	sudo apt install git
	  1.1.2 初始化git本地仓库
	 	 git init
	  1.1.3 关联git账号
	 	 git config --global user.name "username"
	 	 git config --global user.email "email"
	  1.1.4 将本地仓库与远程仓库关联
	 	 git remote origin master https://github.com/username/repositoryName
	 1.2 使用git更新/提交代码
	  1.2.1 提交
	2. 命令行的特殊用法
	 2.1 gcc test.c -o test && ./test : 编译test.c另存为test并直接运行test
	 
	   
#2 C语言语法
	1. C关键字
	 1.1 char : 字符型,占用一个字节
	 1.2 int : 整型,通常反映所用计算机中整数的最自然长度
	 1.3 float : 单精度浮点型
	 1.4 double : 双精度浮点型
	2. 
	 2.1 %d : 整型
	 2.2 %c : 字符型
	 2.3 %.2f : 2位小数的单精度浮点型
	 2.4 %.9f或%11.9f : 9位小数的双精度浮点型(共11位)
	 2.5 %s : 字符串

	 
