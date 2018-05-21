#include<stdio.h>
#include<string.h>

#define LINE 9800 //読み込む行数 
#define ROW 300
int main(void)
{
	FILE *fp;
	char line1[30]; 
	char tmp[LINE][ROW]; //1行ずつ配列に読み込む
	char gene[22]="NC_010473\tGenbank CDS"; //比較用（×gene)
	int data[LINE][2]; //1行ずつ前の数字、後の数字を入れる

	int i,j,k;
	int count=0; //遺伝子数
	int length=0; //遺伝子領域長

	fp = fopen("NC_010473.gff.txt","r"); //Genbank形式？

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}
	else{
		printf("ファイルをオープンしました。\n");
	}

	fgets(line1,29,fp); //1行目はカット

	for(i=0;fscanf(fp,"%[^\n]%*c",tmp[i]) != EOF && tmp[i][0] == 'N' ;i++){ //1行ずつ改行まで読み込む、1文字目がNじゃなくなったら終了

		k=0;
		for(j=0;j<21;j++){ //"NC~CDS"と一致するか確認
			if(gene[j]==tmp[i][j]){
				k++;
			}
		}
		if(k>19){	//一致した場合
			sscanf(tmp[i],"%*22c%d%*c%d%*s",&data[i][0],&data[i][1]); 
			//数字部分（23文字目から）をdataに入れる	

			count++;
			length += data[i][1] -data[i][0] +1; 
			                      /* printf("%d,%d,%d,%d,%d\n",i,data[i][0],data[i][1],count,length);*/
		}
	}

	printf("遺伝子数 %d\n遺伝子領域長 %d\n",count,length);
	printf("ファイルをクローズしました。\n");
	fclose(fp);

	return 0;
}
