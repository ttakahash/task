#coding: utf-8

f =open('array.txt')
data = f.read().replace('\n','') #改行を無視しながら
f.close()


EcoRI = data.split('GAATTC') #EcoRIで切断、リスト化

print 'EcoRI\n断片数は'+str(len(EcoRI))+'本' #6個(要素数6のリスト)
i=-1
for j in EcoRI:
	i += 1 
	if i==0:
		print str(len(EcoRI[i])+1) +'bp' #最初　Gを加える
		
	elif i!= len(EcoRI)-1:
		print str(len(EcoRI[i])+6) +'bp' #最初最後以外　AATTCとGを加える
	else:
		print str(len(EcoRI[i])+5) +'bp\n' #最後 AATTCを加える


Hind = data.split('AAGCTT')
print 'HindIII\n断片数は'+str(len(Hind))+'本' 
i=-1
for j in Hind:
	i += 1 
	if i==0:
		print str(len(Hind[i])+1) +'bp' 
		
	elif i!= len(Hind)-1:
		print str(len(Hind[i])+6) +'bp' 
	else:
		print str(len(Hind[i])+5) +'bp\n' 


BamHI = data.split('GGATCC')
print 'BamHI\n断片数は'+str(len(BamHI))+'本' 
i=-1
for j in BamHI:
	i += 1 
	if i==0:
		print str(len(BamHI[i])+1) +'bp' 
		
	elif i!= len(BamHI)-1:
		print str(len(BamHI[i])+6) +'bp' 
	else:
		print str(len(BamHI[i])+5) +'bp\n' 

NotI = data.split('GCGGCCGC')
print 'BamHI\n断片数は'+str(len(NotI))+'本' 
i=-1
for j in NotI:
	i += 1 
	if i==0:
		print str(len(NotI[i])+1) +'bp' 
		
	elif i!= len(NotI)-1:
		print str(len(NotI[i])+6) +'bp' 
	else:
		print str(len(NotI[i])+5) +'bp\n' 

import re #区切り文字を複数使用するためにreモジュール
All = re.split('GAATTC|AAGCTT|GGATCC|GCGGCCGC',data)
print '全部\n断片数は'+str(len(All))+'本' 
i=-1
for j in All:
	i += 1 
	if i==0:
		print str(len(All[i])+1) +'bp' 
		
	elif i!= len(All)-1:
		print str(len(All[i])+6) +'bp' 
	else:
		print str(len(All[i])+5) +'bp' 

