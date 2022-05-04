## How to setup

Install QT on your machine (Have qmake set up)\
Have an X-Forwarding software to view the GUI if you are using Gaul

## How to run (Locally)

Navigate to the folder where you want to download the project

In a terminal, run these commands.

1. git clone https://repo.csd.uwo.ca/scm/compsci3307_f2021/group12.git
2. qmake
3. make
4. ./GUI

## How to run (On Gaul)

SSH into Gaul and make sure you have the -Y flag\
Example: ssh -Y uwo_username@cs3307.gaul.csd.uwo.ca

Navigate to the folder where you want to download the project

In a terminal, run these commands.

1. git clone https://repo.csd.uwo.ca/scm/compsci3307_f2021/group12.git
2. qmake-qt5
3. make
4. LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/PATHTOPROJECT/group12/libraries/curl/build/lib/ ./GUI\
   Where the PATHTOPROJECT is the path to the repository
