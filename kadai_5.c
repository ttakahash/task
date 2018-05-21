#include <stdio.h>
#include <string.h>
#define num1 10000 //微生物数 
#define num2 50000
#define word 50 


typedef struct{
	char name[word];
	int l1;
	int l2;
	int l3;
}microbe; //微生物名と数をメンバとする構造体

int main(void)
{
	FILE *fp1,*fp2,*fp3;
	int i,j,k;
	int l = 0; //前に出てきた微生物名と被った回数(微生物の種類+l=50000)
	char all[num2+1][word]; //ファイル読み込む用配列
	fp1 = fopen("genus1.list","r");

	if(fp1 == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}
	else{
		printf("ファイルをオープンしました。\n");
	}
	
	microbe mic[num1];

	/*list1*/
	for(i=0;i<num2 && fscanf(fp1,"%[^\n]%*c",all[i])!=EOF;i++){
	}
	for(i=0;i<num2;i++){
		for(j=0,k=1;j+l<i;j++){
			if(strcmp(all[i],mic[j].name) ==0){//前に出てきた微生物名と被った場合
				k++;
				mic[j].l1 += 1; //前に出てきた微生物の数が＋1される
			}
		}
		if(k == 1){ //一回も被らなかった場合
			for(j=0;all[i][j]!='\0';j++){
			strcpy(&mic[i-l].name[j],&all[i][j]); 
			}
			mic[i-l].l1 = 1;
		}
		else{
			l++;
		}
	}
	fclose(fp1);
	fp2 = fopen("genus2.list","r");
	if(fp2 == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}

	/*list2*/
	for(i=0;i<num2 && fscanf(fp2,"%[^\n]%*c",all[i])!=EOF;i++){
	}

	for(i=0;i<num2;i++){
		for(j=0,k=1;j+l<i+num2;j++){
			if(strcmp(all[i],mic[j].name) ==0){
				k++;
				mic[j].l2 += 1;
			}
		}
		if(k == 1){
			for(j=0;all[i][j]!='\0';j++){
			strcpy(&mic[num2+i-l].name[j],&all[i][j]);
			}
			mic[num2+i-l].l2 = 1;
		}
		else{
			l++;
		}
	}

	fclose(fp2);
	fp3 = fopen("genus3.list","r");
	if(fp3 == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}
	/*list3*/
	for(i=0;i<num2 && fscanf(fp3,"%[^\n]%*c",all[i])!=EOF;i++){
	}
	for(i=0;i<num2;i++){
		for(j=0,k=1;j+l<i+num2+num2;j++){
			if(strcmp(all[i],mic[j].name) ==0){
				k++;
				mic[j].l3 += 1;
			}
		}
		if(k == 1){
			for(j=0;all[i][j]!='\0';j++){
			strcpy(&mic[num2+num2+i-l].name[j],&all[i][j]);
			}
			mic[num2+num2+i-l].l3 = 1;
		}
		else{
			l++;
		}
	}
	fclose(fp3);

/*	int a=0,b=0,c=0,d=0;
	for(i=0;i<num1 && mic[i].name[0] != '\0' ;i++){
		a+=mic[i].l1;
		b+=mic[i].l2;
		c+=mic[i].l3;
		d=i+1;
	}*/ //デバッグ用

	printf("Name\t\t\t\t\tlist1\tlist2\tlist3\n");
	for(i=0;i<num1 && mic[i].name[0] != '\0' ;i++){
		if(mic[i].name[0] !='\n'){	//これを書いてもただの改行が微生物名としてカウントされてしまう	
		printf("%s\t\t\t\t\t%d\t%d\t%d\n",mic[i].name,mic[i].l1,mic[i].l2,mic[i].l3);
		}	
	}
	printf("Name\t\t\t\t\tlist1\tlist2\tlist3\n");

/*	printf("%d,%d,%d,%d,%d\n",a,b,c,d,l);*/
	return 0;
}
