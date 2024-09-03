# git rm --cached ./util.sh

git update-index --assume-unchanged util.sh
git update-index --assume-unchanged .gitignore

git add .

git commit -m "update"

git push
