#include<stdio.h>
#include<stdint.h>

int main(int argc, char **argv){
	FILE *file = fopen(argv[1],"rb");
	uint64_t val=69420;
	while(fread(&val,sizeof(int),1,file)!=0){
		val+=val;
	}
	fclose(file);
	printf("%x",val);
}
