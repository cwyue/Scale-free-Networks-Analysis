Folder Structure

1)diameter_analysis/
    main.c            #main function to run this program and output results
    graph.h       #definition for struct and functions for analyzing the graph
    graph.c       #implementation of functions for graph.h
    network_analysis.h   #definition for neccessary functions to compute the graph diameter
    network_analysis.c   #implementation of functions for diameter computation
    read_graph.c   #definition for functions to read the information of a graph from a file
    sample_file.txt #a sample file used for test


2)N_and_diameter/ #this folder contains two programs and a shell script
    main.c            
    graph.h       
    graph.c      
    network_analysis.h   
    network_analysis.c   
    read_graph.c   
    generate_graph.h
    generate_graph.c
    main1.c      #the program to generate a file containing graph topology
    run.sh     #a shell script to run this two programs for several times


Run in jinx
1.qsub -I -q class -l nodes=1 -l walltime=00:05:00

2.Set directory to certain folder and compile all source code by following command
gcc *.c -std=c99 -o myprog -lm 

3./myprog

4.exit


Run the shell script in jinx
1.qsub -I -q class -l nodes=1 -l walltime=00:05:00

2.Compile the ¡°generate¡± program which can generate files including the information of graphs:
gcc generate_graph.c main1.c generate_graph.h -std=c99 -o generate

3.Compile the ¡°analysis¡± program which computes the network diameter:
gcc main.c graph.c network_analysis.c read_graph.c graph.h network_analysis.h -std=c99 -o analysis

4.sh run.sh

5.exit



Work Distrubution
Chenwei Yue: Part2, literature review for graph diameter
Yichao Yao: Part1, literature review for scale-free network