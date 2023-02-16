############################# How to run this script ##############################
# 1. Copy paste this script to the folder in which your <roll_no>_assignment3.tar.gz file is present
# 2. In terminal, run the command : pip install xtarfile
# 3. Enter your roll number below
# 4. Run the command : python3 test_dir_str.py
# 5. If you get any warnings, correct your folder structure
###################################################################################

import tarfile
import os
############################# Enter your roll number inside quotes ##############################
############################# Do not change anything else in code  ##############################
roll_no = '20d170033'
#################################################################################################

ideal_dir_str = ['q1', 'q2', 'q3', 'q4', 'q5', 'q6.ept']
dir_flag = True
final = []
ideal_final = ['q1', 'q2', 'q3', 'q4', 'q51.ept', 'q52', 'q6.ept']
tar_file = str(roll_no)+'_assignment3'
file = tarfile.open(str(tar_file)+'.tar.gz')
files = file.getnames()

file.extractall('./extracted')
root = os.getcwd()
folder = str(root+'/extracted/'+tar_file)
os.chdir(folder)

dir_str = os.listdir()
dir_str.sort()
if dir_str == ideal_dir_str:
    dir_flag = True
else:
    dir_flag = False
    print("[INCORRECT] Top level directory structure is wrong!!")

if dir_flag:
    for subdir, dirs, files in os.walk(folder):
        for file in files:
            final.append(file)

    final.sort()

    if final != ideal_final:
        print("[INCORRECT] File names or directory structure is wrong!!!")
    else:
        print("[CORRECT] Folder structure is correct")



