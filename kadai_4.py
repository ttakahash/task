#coding:utf-8
f = open("enzyme.txt","r")
 
lines = f.readlines()
 
f.close()
 
L = [[0 for j in range(6)] for k in range(len(lines))] #6*元の行の空のリスト
 
i=0
 
for line in lines
        src = line.replace(":",".").replace("\t",".")
        a = src.split(".",5) #['ec','数','数','数','数','その他改行まで']と>    いうリスト
 
        for j in range(1,5):    #多次元配列に挿入
                #数字はソートするため数値に変換
                L[i][j] = int(a[j])
　       L[i][0] = a[0]
         L[i][5] = a[5]
 
         i += 1
 
L.sort(key=lambda x:(x[1],x[2],x[3],x[4])) #数字部分を基準にソート      
 
i=0
for l in range(len(lines)):
         print L[i][0]+":"+str(L[i][1])+"."+str(L[i][2])+"."+str(L[i][3])+"."    +str(L[i][4])+"\t"+L[i][5]
　       i += 1
                                                                        
                                    
