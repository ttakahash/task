#include<stdio.h>
#include<string.h>

#define LINE 8000  

#define ROW 3000
int data[LINE][4]; //1行ずつ番号4つを入れる
char word[LINE][ROW]; //番号以下の文字列

int sort(int x[4],int y[4],char z[ROW],char w[ROW]); //ソート関数
int main(void)
{
	FILE *fp;
	int i,j,k;
	char a[ROW];
	fp =fopen("enzyme.txt","r");

	if(fp == NULL){
		printf("ファイルをオープンできませんでした。\n");
		return 1;
	}
	else{
		printf("ファイルをオープンしました。\n");
	}
	
	for(i=0;i<LINE && fscanf(fp,"%*[ec:]%d%*[.]%d%*[.]%d%*[.]%d%[^\n]%*c",&data[i][0],&data[i][1],&data[i][2],&data[i][3],word[i]) != EOF;i++){ //1行ずつ番号4つ、文字を入れる
	} 
	
        while(k>=0){ //i番目とi-1番目を比較する　ソート関数を1回も使わずに最後まで行った場合ループ終了
                for(i=1,j=-1;i<LINE && data[i][0] != 0;i++){
                           if(data[i-1][0] > data[i][0]){ //1個目の番号を比較、逆ならソート
	                           sort(&data[i][0],&data[i-1][0],&word[i][0],&word[i-1][0]);
        	                   j = i-1; //ソート関数を使うとjが0以上になる
                           }
			   else if(data[i-1][0] < data[i][0]){
			   }//正しいので何もしない

                           else if(data[i-1][1] > data[i][1]){ //1個目が等しいので2個目
	                           sort(&data[i][0],&data[i-1][0],&word[i][0],&word[i-1][0]);
                                   j = i-1; 
                           }
			   else if(data[i-1][1] < data[i][1]){
			   }

                           else if(data[i-1][2] > data[i][2]){ //2個目も等しいので3個目
	                           sort(&data[i][0],&data[i-1][0],&word[i][0],&word[i-1][0]);
                                   j = i-1;
                           }
			   else if(data[i-1][2] < data[i][2]){
			   }

                           else if(data[i-1][3] > data[i][3]){ //3個目も等しいので4個目
	                           sort(&data[i][0],&data[i-1][0],&word[i][0],&word[i-1][0]);
                                   j = i-1;
                           }
			   else{
			   }
                 }
                        k=j; //ソート関数を一回も使わなければk=-1
        }
	for(i=0;i<=LINE && data[i][0] != 0;i++){
		printf("ec:%d.%d.%d.%d%s\n",data[i][0],data[i][1],data[i][2],data[i][3],word[i]); //番号と文字が全て入れ替わってあるのでそのまま出力
	}

	fclose(fp);
	printf("ファイルをクローズしました。\n");
		return 0;
}	
 /*ソート関数*/
int sort(int x[4],int y[4],char z[ROW],char w[ROW]) //番号と文字それぞれで、2つを入れ替えるようにしたため引数が4つになってしまった
{
        int i;
        char tmpw[ROW];
        int tmp[4];
	
        strcpy(tmpw,z);
        strcpy(z,w);
        strcpy(w,tmpw);
	
	for(i=0;i<4;i++){
 	tmp[i] = x[i];
       	x[i] = y[i];
       	y[i] = tmp[i];
	}
        
        return 0;
}

