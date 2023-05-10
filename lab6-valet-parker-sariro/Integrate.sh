set -e
opam switch 4.03.0 > /dev/null
eval $(opam env)
heptc -target c -s finallogic -hepts Logic.ept
rm logic_c/_main*
cp -rf logic_c/* supervisor
rm -r logic_c
rm logic.epci logic.log logic.mls
touch supervisor/pervasives.h
# cd supervisor
# arduino-cli compile -b arduino:avr:uno supervisor.ino 
# arduino-cli upload -p /dev/ttyACM0 -b arduino:avr:uno supervisor.ino 
