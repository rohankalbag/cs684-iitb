opam switch 4.03.0 > /dev/null
eval $(opam env)
rm -rf logic_c
heptc -target c -s obstavoider -hepts Logic.ept
rm logic_c/_main*
cp -r logic_c/* supervisor
rm -r logic_c
rm logic.epci logic.log logic.mls
touch supervisor/pervasives.h
#cp -r logic_c/* ../Desktop/Parallels\ Shared\ Folders/Home/Downloads/supervisor/

