//#include <iostream>
//#include <string>
//#include <fstream>
//#include <stdlib.h>


#include <stdio.h>
#include <stdlib.h>
#include<string.h>



//using namespace std;

int main(int argc, char **argv) {
//	ifstream in;
//	ofstream out;
	char* directory, str;
	char* filename_in, filename_out;
	if (argc >= 2){
			directory = argv[1];
			printf("Directory is : %s \n", directory);
		//	cout << "Directory is : " << directory << endl;
			char*	test = "/read.txt";

			filename_in = strcat(directory,test);
		//	filename_in = directory + "/read.txt";

		//	in.open(filename_in.c_str());
			FILE* demo = fopen(filename_in,"r+");
		
		
			if (demo == NULL) {
 			   perror("Failed: ");
				exit(1);
			}
			//if (!in.good()){
			//	cout << "You forgot the read.txt file in the bindmount directory, quitting." << endl;
			//	exit(1);
		//	}


			test = "/write.txt";
			filename_in = strcat(directory,test);
			//filename_out = directory + "/write.txt";
		//	out.open(filename_out.c_str());
			
			demo = fopen(filename_in,"w+");
				
			char *buffer;
			size_t bufsize = 32;

			while(getline(&buffer,&bufsize,stdin)){
			fprintf(demo, "%s \n", buffer);
			}


		//	while(getline(in, str)) {
		//		out << str << endl;
		//	}

			fprintf(demo, "%s \n", " Hello world from the final program!  Here were the arguments!");
		//	out << endl << " Hello world from the final program!  Here were the arguments!" << endl;
		//	cout << endl << " Hello world from the final program!  Here were the arguments!" << endl;
			printf(" Hello world from the final program!  Here were the arguments!");
		for (int i = 2; i < argc; i++){
			
			printf("Argument : %d %s \n",i,argv[i]);
	//		cout << "Argument " << i << " " << argv[i] << endl;
		//	out << "Argument " << i << " " << argv[i] << endl;
			fprintf(demo, "%s %d %s %s \n", "Argument", i, " ",argv[i]);
		}
		fclose(demo);
	} else
		return 0;
}
