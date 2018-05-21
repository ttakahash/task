#include<stdio.h>
#include<string.h>

#define base 50000 //塩基数

int main(void)
{
	FILE *fp;
	int k;
	int i=0,j=0,c=0,d=0;
	char all[base]; //最初に全て文字を読み込む配列
	char data[base]; //改行なし(ATGCのみ)の配列
	char l[base]; //断片長の判断用

	fp=fopen("array.txt","r"); 
	
	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}
	else{
		printf("ファイルをオープンしました。\n");
	}

	for(i=0;fscanf(fp,"%c",&all[i])!=EOF;i++){ //改行も含め一つの配列に入れる
		} 

/*塩基配列（改行なし）を入れる*/
	i=0;
	j=0;	
	while(all[i]!='\0'){
		for(k=0;k<70;k++){ //1行70塩基
			data[i-j] = all[i];
			i++;
		}
		i++;
		j++;
	}
/*EcoRI*/
	printf("EcoRI\n");
	for(i=0,c=0;data[i+5] != '\0';i++,c++){
		if(data[i]=='G' && data[i+1]=='A' && data[i+2]=='A' && data[i+3]=='T' && data[i+4]=='T' && data[i+5]=='C'){
			l[i] = 'B';
		}
		else{
			l[i] = 'A';
		}
	}
	l[c]='A';
	l[c+1]='A';
	l[c+2]='A';
	l[c+3]='B'; //GAATTCのGの部分 と一番最後 がBであとは全てAの配列lができる
	l[c+4]='\0';
	for(i=0,d=0;data[i] !='\0';i++){
		d++;
		if(l[i]=='B'){
			printf("%d\n",d); //(Bの次にあるAから、)Bまでの個数を出力
			d = 0;
		}
	}


/*HindⅢ */	
	printf("\nHindⅢ\n");
	for(i=0,c=0;data[i+5] != '\0';i++,c++){
		if(data[i]=='A' && data[i+1]=='A' && data[i+2]=='G' && data[i+3]=='C' && data[i+4]=='T' && data[i+5]=='T'){
			l[i] = 'C';
		}
		else{
		}
	}
	l[c+3]='C'; //上のlにいくつかCが増える、以下同様
	for(i=0,d=0;data[i] !='\0';i++){
		d++;
		if(l[i]=='C'){
			printf("%d\n",d);
			d = 0;
		}
	}

/*BamHI*/	
	printf("\nBamHI\n");
	for(i=0,c=0;data[i+5] != '\0';i++,c++){
		if(data[i]=='G' && data[i+1]=='G' && data[i+2]=='A' && data[i+3]=='T' && data[i+4]=='C' && data[i+5]=='C'){
			l[i] = 'D';
		}
		else{
		}
	}
	l[c+3]='D';
	for(i=0,d=0;data[i] !='\0';i++){
		d++;
		if(l[i]=='D'){
			printf("%d\n",d);
			d = 0;
		}
	}

/*NotI*/
	printf("\nNotI\n");
	for(i=0,c=0;data[i+7] != '\0';i++,c++){
		if(data[i]=='G' && data[i+1]=='C' && data[i+2]=='G' && data[i+3]=='G' && data[i+4]=='C' && data[i+5]=='C' && data[i+6]=='G' && data[i+7]=='C'){
			l[i+1] = 'E';
		}
		else{
		}
	}
	l[c+5]='E';
	for(i=0,d=0;data[i] !='\0';i++){
		d++;
		if(l[i]=='E'){
			printf("%d\n",d);
			d = 0;
		}
	}
/*全部*/
	printf("\n全部\n");
	for(i=0,d=0;data[i] !='\0';i++){
		d++;
		if(l[i]!='A'&& l[i]!='\0'){
			printf("%d\n",d);
			d = 0;
		}
}	
	return 0;
}
