opam switch 4.03.0 > /dev/null
eval $(opam env)
heptc -target c -s finallogic -hepts Logic.ept
rm logic_c/_main*
cp -r logic_c/* supervisor
rm -r logic_c
rm logic.epci logic.log logic.mls
touch supervisor/pervasives.h

