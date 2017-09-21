/*
 * main.c
 *
 *  Created on: 2016Äê10ÔÂ20ÈÕ
 *      Author: Administrator
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "graph.h"
#include "network_analysis.h"

int main(int argc,char *argv[ ]){

	char* inFile=argv[1];//filename is specified by the second argument
	GRAPH graph;
	create_graph(inFile,&graph);
	network_diameter(&graph);


	/*If the output file is specified via "-o" flag, generate a output
	 * file with argv[3] as its name;
	 * Otherwise, print the graph diameter to the screen;
	 * */


	if(argc>=4){
		if(strcmp(argv[2],"-o")==0){
			char* outFile=argv[3];
			output_file(&graph,outFile);
		}
	}else{
		printf("Network diameter=%d\n",graph.diameter);
	}
	clear_graph(&graph);

	return 0;

}

