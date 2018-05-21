#include<stdio.h>
#include<string.h>
f

#define N 300 
#define M 100
int func(int s,int j,char t[],char b[]);
char data[M];

int main(void)
{
	int i;
	char base[N]="\0";
	printf("アミノ酸配列を入力してください\n");
	scanf("%s",data);
	for(i=0;data[i]!='\0';i++){
	}
	func(0,i,data,base);
	return 0;
}

int func(int s,int j,char t[],char b[])
{
	char tmp[64][N];
	
	if(s >= j){
		printf("%s\n",b);
		return 1;
	}
	switch(t[s]){
		case 'F':	
		strcpy(tmp[0],b);
		strcat(tmp[0],"UUU");
		func(s+1,j,t,tmp[0]);

		strcpy(tmp[1],b);
		strcat(tmp[1],"UUC");
		func(s+1,j,t,tmp[1]);
		break;

		case 'L':	
		strcpy(tmp[2],b);
		strcat(tmp[2],"UUA");
		func(s+1,j,t,tmp[2]);

		strcpy(tmp[3],b);
		strcat(tmp[3],"UUG");
		func(s+1,j,t,tmp[3]);

		strcpy(tmp[4],b);
		strcat(tmp[4],"CUU");
		func(s+1,j,t,tmp[4]);

		strcpy(tmp[5],b);
		strcat(tmp[5],"CUC");
		func(s+1,j,t,tmp[5]);

		strcpy(tmp[6],b);
		strcat(tmp[6],"CUA");
		func(s+1,j,t,tmp[6]);

		strcpy(tmp[7],b);
		strcat(tmp[7],"CUG");
		func(s+1,j,t,tmp[7]);
		break;

		case 'I':	
		strcpy(tmp[8],b);
		strcat(tmp[8],"AUU");
		func(s+1,j,t,tmp[8]);
	
		strcpy(tmp[9],b);
		strcat(tmp[9],"AUC");
		func(s+1,j,t,tmp[9]);

		strcpy(tmp[10],b);
		strcat(tmp[10],"AUA");
		func(s+1,j,t,tmp[10]);
		break;

		case 'M':	
		strcpy(tmp[11],b);
		strcat(tmp[11],"AUG");
		func(s+1,j,t,tmp[11]);
		break;

		case 'V':		
		strcpy(tmp[12],b);
		strcat(tmp[12],"GUU");
		func(s+1,j,t,tmp[12]);

		strcpy(tmp[13],b);
		strcat(tmp[13],"GUC");
		func(s+1,j,t,tmp[13]);

		strcpy(tmp[14],b);
		strcat(tmp[14],"GUA");
		func(s+1,j,t,tmp[14]);

		strcpy(tmp[15],b);
		strcat(tmp[15],"GUG");
		func(s+1,j,t,tmp[15]);
		break;

		case 'S':		
		strcpy(tmp[16],b);
		strcat(tmp[16],"UCU");
		func(s+1,j,t,tmp[16]);

		strcpy(tmp[17],b);
		strcat(tmp[17],"UCC");
		func(s+1,j,t,tmp[17]);

		strcpy(tmp[18],b);
		strcat(tmp[18],"UCA");
		func(s+1,j,t,tmp[18]);

		strcpy(tmp[19],b);
		strcat(tmp[19],"UCG");
		func(s+1,j,t,tmp[19]);

		strcpy(tmp[59],b);
		strcat(tmp[59],"AGU");
		func(s+1,j,t,tmp[59]);

		strcpy(tmp[60],b);
		strcat(tmp[60],"AGC");
		func(s+1,j,t,tmp[60]);
		break;

		case 'P':		
		strcpy(tmp[20],b);
		strcat(tmp[20],"CCU");
		func(s+1,j,t,tmp[20]);

		strcpy(tmp[21],b);
		strcat(tmp[21],"CCC");
		func(s+1,j,t,tmp[21]);

		strcpy(tmp[22],b);
		strcat(tmp[22],"CCA");
		func(s+1,j,t,tmp[22]);

		strcpy(tmp[23],b);
		strcat(tmp[23],"CCG");
		func(s+1,j,t,tmp[23]);
		break;

		case 'T':		
		strcpy(tmp[24],b);
		strcat(tmp[24],"ACU");
		func(s+1,j,t,tmp[24]);

		strcpy(tmp[25],b);
		strcat(tmp[25],"ACC");
		func(s+1,j,t,tmp[25]);

		strcpy(tmp[26],b);
		strcat(tmp[26],"ACA");
		func(s+1,j,t,tmp[26]);

		strcpy(tmp[27],b);
		strcat(tmp[27],"ACG");
		func(s+1,j,t,tmp[27]);
		break;


		case 'A':		
		strcpy(tmp[28],b);
		strcat(tmp[28],"GCU");
		func(s+1,j,t,tmp[28]);

		strcpy(tmp[29],b);
		strcat(tmp[29],"GCC");
		func(s+1,j,t,tmp[29]);

		strcpy(tmp[30],b);
		strcat(tmp[30],"GCA");
		func(s+1,j,t,tmp[30]);

		strcpy(tmp[31],b);
		strcat(tmp[31],"GCG");
		func(s+1,j,t,tmp[31]);
		break;
	
		case 'Y':		
		strcpy(tmp[32],b);
		strcat(tmp[32],"UAU");
		func(s+1,j,t,tmp[32]);

		strcpy(tmp[33],b);
		strcat(tmp[33],"UAC");
		func(s+1,j,t,tmp[33]);
		break;
					
		case 'H':		
		strcpy(tmp[34],b);
		strcat(tmp[34],"CAU");
		func(s+1,j,t,tmp[34]);

		strcpy(tmp[35],b);
		strcat(tmp[35],"CAC");
		func(s+1,j,t,tmp[35]);
		break;

		case 'Q':		
		strcpy(tmp[36],b);
		strcat(tmp[36],"CAA");
		func(s+1,j,t,tmp[36]);

		strcpy(tmp[37],b);
		strcat(tmp[37],"CAG");
		func(s+1,j,t,tmp[37]);
		break;

		case 'N':		
		strcpy(tmp[38],b);
		strcat(tmp[38],"AAU");
		func(s+1,j,t,tmp[38]);

		strcpy(tmp[39],b);
		strcat(tmp[39],"AAC");
		func(s+1,j,t,tmp[39]);
		break;
		
		case 'K':		
		strcpy(tmp[40],b);
		strcat(tmp[40],"AAA");
		func(s+1,j,t,tmp[40]);

		strcpy(tmp[41],b);
		strcat(tmp[41],"AAG");
		func(s+1,j,t,tmp[41]);
		break;
			
		case 'D':		
		strcpy(tmp[42],b);
		strcat(tmp[42],"GAU");
		func(s+1,j,t,tmp[42]);

		strcpy(tmp[43],b);
		strcat(tmp[43],"GAC");
		func(s+1,j,t,tmp[43]);
		break;

		case 'E':		
		strcpy(tmp[44],b);
		strcat(tmp[44],"GAA");
		func(s+1,j,t,tmp[44]);

		strcpy(tmp[45],b);
		strcat(tmp[45],"GAG");
		func(s+1,j,t,tmp[45]);
		break;
			
		case 'C':		
		strcpy(tmp[46],b);
		strcat(tmp[46],"UGU");
		func(s+1,j,t,tmp[46]);

		strcpy(tmp[47],b);
		strcat(tmp[47],"UGC");
		func(s+1,j,t,tmp[47]);
		break;

		case 'W':		
		strcpy(tmp[48],b);
		strcat(tmp[48],"UGG");
		func(s+1,j,t,tmp[48]);
		break;

		case 'R':	
		strcpy(tmp[49],b);
		strcat(tmp[49],"CGU");
		func(s+1,j,t,tmp[49]);

		strcpy(tmp[50],b);
		strcat(tmp[50],"CGC");
		func(s+1,j,t,tmp[50]);

		strcpy(tmp[51],b);
		strcat(tmp[51],"CGA");
		func(s+1,j,t,tmp[51]);

		strcpy(tmp[52],b);
		strcat(tmp[52],"CGG");
		func(s+1,j,t,tmp[52]);

		strcpy(tmp[53],b);
		strcat(tmp[53],"AGA");
		func(s+1,j,t,tmp[53]);

		strcpy(tmp[54],b);
		strcat(tmp[54],"AGG");
		func(s+1,j,t,tmp[54]);
		break;

		case 'G':	
		strcpy(tmp[55],b);
		strcat(tmp[55],"GGU");
		func(s+1,j,t,tmp[55]);

		strcpy(tmp[56],b);
		strcat(tmp[56],"GGC");
		func(s+1,j,t,tmp[56]);

		strcpy(tmp[57],b);
		strcat(tmp[57],"GGA");
		func(s+1,j,t,tmp[57]);

		strcpy(tmp[58],b);
		strcat(tmp[58],"GGG");
		func(s+1,j,t,tmp[58]);
		break;

/*		default:
		printf("ACDEFGHIKLMNPQRSTVWYの中で1文字ずつ入力してください\n");
		break;*/
	}
	return 0;
}

