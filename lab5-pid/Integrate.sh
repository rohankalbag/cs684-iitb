opam switch 4.03.0 > /dev/null
eval $(opam env)

mv Logx.ept Logic.ept
heptc -target c -s pidlinex -hepts Logic.ept
rm logic_c/_main*
cp -r logic_c/* supervisor
rm -r logic_c
rm logic.epci logic.log logic.mls
mv Logic.ept Logx.ept
touch supervisor/pervasives.h

