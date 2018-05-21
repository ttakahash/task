#coding: utf-8

amino = raw_input('アミノ酸配列を入力してください:')
amino_list = list(amino.upper()) #入力した文字列を大文字にして1文字ずつリスト化

for i in amino_list:	 #以下の文字になっているか調べる
	if i not in{'A','C','D','E','F','G','H','I','K','L','M','N','P','Q','R','S','T','V','W','Y'}:
		print ('正しいアミノ酸配列を入力してください')
		break

length = len(amino_list)

base = []

def perm(amino_list,length,base,n): #順列を作って出力する関数の定義

	if n >= length: #n回繰り返したら
		mojiretu = ''.join(base) #リストを文字列に変換、連結
		print mojiretu
		return 1


	elif amino_list[n] == 'F': #Pheの場合
		tmp = base[:] #一個前までのをコピーして
		tmp.append('UUU') #3文字加え
		perm(amino_list,length,tmp,n+1) #たものを持っていく

		tmp = base[:] #一個前までのをコピーして
		tmp.append('UUC') #3文字加え
		perm(amino_list,length,tmp,n+1) #たものも持っていく

	elif amino_list[n] =='L':
		tmp = base[:]
		tmp.append('UUA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('UUG')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('CUU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CUC')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('CUA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CUG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='I':
		tmp = base[:]
		tmp.append('AUU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AUC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AUA')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='M':
		tmp = base[:]
		tmp.append('AUG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='V':
		tmp = base[:]
		tmp.append('GUU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GUC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GUA')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('GUG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='S':
		tmp = base[:]
		tmp.append('UCU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('UCC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('UCA')
		perm(amino_list,length,tmp,n+1)
		tmp = base[:]

		tmp.append('UCG')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AGU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AGC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='P':
		tmp = base[:]
		tmp.append('CCU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CCC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CCA')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('CCG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='T':
		tmp = base[:]
		tmp.append('ACU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('ACC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('ACA')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('ACG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='A':
		tmp = base[:]
		tmp.append('GCU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GCC')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GCA')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('GCG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='Y':
		tmp = base[:]
		tmp.append('UAU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('UAC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='H':
		tmp = base[:]
		tmp.append('CAU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CAC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='Q':
		tmp = base[:]
		tmp.append('CAA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CAG')
		perm(amino_list,length,tmp,n+1)
		
	elif amino_list[n] =='N':
		tmp = base[:]
		tmp.append('AAU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AAC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='K':
		tmp = base[:]
		tmp.append('AAA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AAG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='D':
		tmp = base[:]
		tmp.append('GAU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GAC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='E':
		tmp = base[:]
		tmp.append('GAA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GAG')
		perm(amino_list,length,tmp,n+1)
		
	elif amino_list[n] =='C':
		tmp = base[:]
		tmp.append('UGU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('UGC')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='W':
		tmp = base[:]
		tmp.append('UGG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='R':
		tmp = base[:]
		tmp.append('CGU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CGC')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('CGA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('CGG')
		perm(amino_list,length,tmp,n+1)
		
		tmp = base[:]
		tmp.append('AGA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('AGG')
		perm(amino_list,length,tmp,n+1)

	elif amino_list[n] =='G':
		tmp = base[:]
		tmp.append('GGU')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GGC')
		perm(amino_list,length,tmp,n+1)

		tmp = base[:]
		tmp.append('GGA')
		perm(amino_list,length,tmp,n+1)
	
		tmp = base[:]
		tmp.append('GGG')
		perm(amino_list,length,tmp,n+1)

		
perm(amino_list,length,base,0)
