# forestry

## setting up the project

**install git**:  https://desktop.github.com

**install git lfs**: https://git-lfs.github.com

**install ue4**: https://www.unrealengine.com/download?dismiss=https%3A%2F%2Fwww.unrealengine.com%2F

**clone the project in github**: in github desktop, hit the plus sign and clone "forestry" from "mikeferchak"

### open the project
* right click the project
* open in explorer
* open forestry.uproject (or just open it from the epic launcher)


## some git commands for pros

### see what stuff is staged/unstaged
git status

### reset everything to the master branch (wipes out whatever you have)
git reset --hard origin/master

### fetch and update to the latest changes
git fetch
git rebase origin/master

### make a new branch
git checkout -b WHATEVERYOUWANT

### switch branches
git branch WHATEVERYOUWANT

### push that branch up to github
git push origin WHATEVERYOUWANT

