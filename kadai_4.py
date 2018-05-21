#coding:utf-8
f = open("enzyme.txt","r")
 
lines = f.readlines()

f.close()
 
L = [[0 for j in range(6)] for k in range(len(lines))] #6*元の行の空のリスト
 
i=0

for line in lines:

        src = line.replace(":",".").replace("\t",".")
        a = src.split(".",5) #['ec','数','数','数','数','その他改行まで']というリスト

        for j in range(6):      #多次元配列に挿入
                L[i][j] = a[j]

        i += 1

L.sort(key=lambda x:(x[1],x[2],x[3],x[4])) #数字部分を基準にソート      

i=0
for l in range(len(lines)):
        print L[i][0]+":"+L[i][1]+"."+L[i][2]+"."+L[i][3]+"."+L[i][4]+"\t"+L[i][5] #元の形式で出力
        i += 1                   
