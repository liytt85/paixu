lyt@lyttt:~$ ssh -T git@github.com
Hi liytt85! You've successfully authenticated, but GitHub does not provide shell access.
lyt@lyttt:~$ mkdir paixu
lyt@lyttt:~$ cd paixu/
lyt@lyttt:~/paixu$ echo "paixu" >> README.md
lyt@lyttt:~/paixu$ ls
README.md
lyt@lyttt:~/paixu$ git init
初始化空的 Git 仓库于 /home/lyt/paixu/.git/
lyt@lyttt:~/paixu$ git add .
lyt@lyttt:~/paixu$ git commit -m "tian jia readme"
[master （根提交） 658bbda] tian jia readme
 1 file changed, 1 insertion(+)
 create mode 100644 README.md
lyt@lyttt:~/paixu$ git remote add origin git@github.com:liytt85/paixu.git
lyt@lyttt:~/paixu$ git push -u origin master
Counting objects: 3, done.
Writing objects: 100% (3/3), 213 bytes | 0 bytes/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To git@github.com:liytt85/paixu.git
 * [new branch]      master -> master
分支 master 设置为跟踪来自 origin 的远程分支 master。
lyt@lyttt:~/paixu$ git push origin master
Everything up-to-date
lyt@lyttt:~/paixu$ git add .
lyt@lyttt:~/paixu$ git commit -m "tian jia readme"
[master 0c832a3] tian jia readme
 2 files changed, 10 insertions(+)
 create mode 100755 a.out
 create mode 100644 test1.cpp
lyt@lyttt:~/paixu$ git push -u origin master
Counting objects: 5, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 3.37 KiB | 0 bytes/s, done.
Total 4 (delta 0), reused 0 (delta 0)
To git@github.com:liytt85/paixu.git
   658bbda..0c832a3  master -> master
分支 master 设置为跟踪来自 origin 的远程分支 master。
lyt@lyttt:~/paixu$ git add .
lyt@lyttt:~/paixu$ git push origin master
Everything up-to-date
lyt@lyttt:~/paixu$ git commit -m "di or ci"
[master 5703082] di or ci
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 test2.cpp
lyt@lyttt:~/paixu$ git push origin master
Counting objects: 4, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 259 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To git@github.com:liytt85/paixu.git
   0c832a3..5703082  master -> master
lyt@lyttt:~/paixu$
