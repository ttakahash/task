#coding: utf-8
genecount = 0
genelength =0
f = open('genbank.txt', 'r')
for line in f:
	parts = line.strip().split('\t')
	if line.startswith("#"):
            continue
	if parts[1] == 'Genbank' and parts[2] =='CDS':
		genecount += 1
		genelength += int(parts[4])-int(parts[3])+1
print("遺伝子数 "+str(genecount))
print("遺伝子領域長 "+str(genelength))
f.close()		
