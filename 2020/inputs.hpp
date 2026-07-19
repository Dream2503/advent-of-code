#pragma once
#include "../utils.hpp"

constexpr char input1[] = R"(1652
1998
1677
1855
1955
1875
1993
1860
1752
1936
1816
1924
1872
2000
1967
1882
1737
1801
1832
1985
1933
1911
1894
1384
1871
1607
1858
1950
222
1931
1635
1960
1909
1884
1921
1959
1981
1920
1684
1734
1490
1632
1935
1982
217
1874
1646
1943
986
1509
1899
1834
1908
1769
1989
1977
1436
1973
1974
1941
1624
2006
1867
843
2003
1838
1904
1892
1972
1957
1890
1540
1578
1845
1912
1947
1847
1841
1793
2005
1716
1852
1865
1532
1800
1949
1898
1698
1806
1840
1833
1915
479
1963
1923
1567
1849
1536
1741
1818
1934
1952
1805
1868
1808
955
1954
1712
1797
1472
1807
1673
1601
1883
1869
1969
1886
1491
1572
2010
1796
1870
1946
1938
1813
1825
1944
129
1856
1827
1939
1642
1542
745
1836
1810
529
1822
1917
486
1953
2008
1991
1628
1937
1987
1837
1820
1922
1850
1893
1942
1928
1990
1589
1970
1986
1925
1902
2009
1565
1610
1857
1889
1901
1790
1880
1999
1964
1948
1824
1877
1916
1978
1839
1659
1846
323
1387
1926
1958
1914
1906
178
1979
1994
2004
1862
1704
1903
1997
1876
1992
1864
1932
1918
1962
1802
1278
1861)";

constexpr char input2[] = R"(16-18 h: hhhhhhhhhhhhhhhhhh
17-18 d: ddddddddddddddddzn
15-18 c: cccccccccccccczcczc
3-9 r: pplzctdrc
4-14 d: lxdmddfddddddd
8-14 v: pvxlknfvplgktv
11-13 h: hphhhhhhhfhshhhhh
1-4 l: hbljb
1-2 x: wxqzlvt
1-5 g: dxggdggb
5-13 f: lfgdplfffxffswck
6-7 z: zzzzgzzzz
1-7 c: cccclcchrkctfhc
3-7 c: ccjccqzcc
15-16 x: rxxchpvgxxhxkxxw
3-5 h: hbxjg
3-7 q: sffnxxqvdfsnqlhqpq
8-11 h: hhhhhhhlhhh
7-8 w: bxwzdlwr
4-5 x: xxxxp
4-7 x: xxxxxxxx
2-18 l: lllllllllllllllllrll
6-10 n: nnnnnngnznn
12-13 c: ccccccccccchc
2-6 g: ggqngxgbggc
4-5 k: xdztx
4-9 m: txskmsnxvqjhlp
9-11 w: wwtxmsjwjwlw
12-16 g: cgggpkhggqkgrjcbx
9-11 s: sxsssmssvszs
17-18 c: cccccccccclccsccchcc
7-8 z: stpgzwlqm
9-19 q: qqqqqqqqqqqqqqqqqqqq
4-5 p: hpvtpfgwp
8-9 m: mmmmmmqmm
11-12 s: ssswsssssspts
2-4 j: jjdr
17-18 k: kvkkmlkkkkkkfklkkkkk
1-4 b: bbbwb
2-12 c: cccccccccccccc
14-15 l: llllllllllplllllllll
7-10 c: czcccsvnrbccc
11-12 d: nfmvdlxbfwzq
8-10 t: tvtttttzts
5-6 g: wggghg
11-16 d: ztfdkggclvzmvsxd
16-17 v: vvvvvvbvvpvxvvvhv
3-7 w: vrswklnfnjzkm
1-18 s: bsssssssssssssssshss
8-10 g: vdzldttzgm
19-20 n: nnnnnnnnnnnnnnnnnnrb
1-4 x: xxxqxxxxx
11-13 m: xmmxmmmmgmwmmm
4-5 j: pzfjjsjjmcm
1-7 j: jsjsmjj
7-8 j: nqkkljhbj
4-5 w: wmsbqhmwdjns
4-7 j: jbjjcjcf
2-7 f: jhsxldwf
3-4 f: vmff
5-7 z: fscmzjqs
2-10 g: ggtfwzpbkgqqlzwmbm
5-6 j: jjwbdjj
13-15 b: bbbbbbbbkbbbvbbbb
4-6 t: qdthtt
1-8 m: kmmmmmmvmmmmm
4-8 g: gbgqgtcglvgggcg
3-4 h: ghjn
3-8 b: mgbzbjvbkbpbd
11-17 k: kkkktskgkkkfgzkkk
1-6 f: ftnvfgtrlcs
3-13 r: hrrzrfrfpvdlrnrcrcs
3-8 l: gzljpllvl
3-11 h: hchjhhnhhnhvhhhhx
9-16 s: srssssssssskpldsqss
4-10 n: nnbnnnwnnwnnnxnn
3-4 n: nnnp
11-19 z: nznpcdnxkwznzlpvcwzj
4-7 w: wwwrwtwncwvwwwwx
3-4 s: bkgs
2-16 z: nzlcmlvqdcmmcnphb
1-15 z: zzzzzzzzzzzzzzzzzz
9-10 t: tmgttdtqtttttwbgttt
1-2 h: hhhhhmhmkgxhnhw
4-5 h: hlhhh
9-15 h: xhhhhhchhhznphh
5-8 w: jwphwwwj
4-5 z: lztsz
10-11 c: mhtdcdhggccgfck
3-8 t: ccttgcktz
1-12 m: smmmmxmmmgmx
1-12 r: srrrrrrrrrrlrrrrr
2-5 h: khhzhrqr
3-4 m: mmztmm
2-5 f: fbffqf
1-11 p: zpppppppnphppx
5-12 z: pqrzlwztvzjfzbt
8-12 b: bbbbbbbdbbbcb
3-4 g: ghqg
7-10 m: mmmmmmmmmmmm
5-14 q: jblkqbqpmqwsqt
6-8 r: rrrtrlzltfrrrgrr
9-14 r: rrrrrzrrjrrrgmr
9-10 m: tmshdggksmv
10-17 d: dddddddddcddddddf
6-7 f: ffffffx
9-19 j: jfjljzjcjjzjjjfjpjj
2-6 h: jhxmhh
1-7 g: wgggggzggxmggg
5-6 n: nlgnlx
4-7 t: thzttttt
4-6 x: xhnxjx
14-16 p: ppppppppppppppppp
2-4 s: ssps
7-15 k: bzfljhskslxlznwvphg
6-7 j: dkjjsgk
9-11 p: ppppppppkpmpp
5-8 t: tzcttttttt
8-11 d: dddddddgddld
3-9 w: dwwhwbwwwwwzwtwxw
2-3 x: xxwxmw
1-5 g: gdlvg
4-6 c: cccmcrccccccc
1-11 f: ffffffffffnff
10-11 l: lgqgnwlhgdlvdlv
3-7 v: cjvvvvnvjvjvgvkx
4-5 v: vvvsv
13-15 t: tttttrtttttttth
11-12 q: nccsqqhqqqqqlqqqqq
2-7 p: pspppppppp
4-6 g: gglggg
17-18 p: hwpkcxvppzxxvpjzpp
1-3 b: dlfz
11-12 p: ppppppppppfpdppp
1-2 s: ssszdss
2-15 b: nbsblthmngvbqvbh
1-6 q: sqqqqbqq
4-11 q: tgmtqqrxfsvrzhc
8-13 q: qqqqzqqqqqqmqqqjqq
9-17 n: nnnnnnnnnnnnnnnnpnnn
6-9 h: rmhrlkhskbhhq
5-6 n: qnnjnn
4-6 l: lxlllkvdltgcfl
12-15 f: fflffffpfvftffwff
13-16 t: fpwmwmvtqbvxtvtt
7-8 w: kwwwjgwmwbw
1-2 x: xxnvmbcmxhnkkgfrr
3-7 f: rpcnzvjgh
13-15 r: rrwrkrrrrrrrdrbr
11-13 h: ghnzvhhhhwhchmh
7-8 h: hhhhhhnv
5-6 l: kgllll
1-4 k: kqsjblck
6-8 c: crxxccccgc
2-13 g: fvmhpbqkgvbwqvbldb
4-7 g: ggglggmgggkggg
6-7 n: znnrnpnn
12-15 j: jjqjzjjchjmjzsgppss
4-5 k: kkkkk
12-16 r: rrrrrrrrrrrcrrznrz
10-12 w: hdwsvqpwzvtx
9-11 b: brbtbwbbjbbbbbb
6-8 q: nqkvkqdqrq
3-5 n: pjcnd
9-11 q: qqqqqqqqpqqqq
6-7 b: zdbbfpqbvbbgbnq
11-14 g: dxvgpggnpngpqgn
8-11 z: zzzzzzzczzq
8-18 z: nzczzlkcchpzdkrpvzrd
2-4 d: fwdhl
12-13 m: mmmqllmmmmhnf
6-8 b: bmbbcbbbznnbd
18-19 z: zkzzzzzzzzzzzzzzzzz
4-10 m: smkkrpqznmnfdprq
7-8 j: jjjjjjhsj
10-15 t: trpttgcttttttbtt
6-7 t: tttttltttttttt
7-13 x: bxxcxxvxknqcxsx
6-10 j: zjrrtjwxfjhhtcsktslf
3-5 m: zjmms
11-14 v: vvvvvvvkvvvvvvv
1-2 c: ccch
13-14 v: vvvsvvvvvvvvvv
9-12 g: fgkgxgggcjdg
4-6 t: ttpxtgntzwtx
10-12 g: gggggggggkgbg
1-3 l: llllw
7-12 d: nddvldndjcdpdddz
2-5 w: wwtlwwvdww
6-11 c: fcccccccdcc
12-19 s: sjsssssssssssshssss
19-20 t: ttttttttttttttttttkf
7-11 z: zpfgzczcxzmclzzz
2-7 d: sddlpvdqzzlqfkjkbb
2-7 k: dkmlkckm
4-8 w: wwwwwwswww
1-3 d: pddd
1-9 r: chrrrrrrr
17-19 t: ttttttttttttttttptvt
17-18 v: xvvvkvvvvxvsvhbvvv
6-11 j: njjjjcpjjjbjhqj
1-3 s: ssss
15-16 k: kkkckkqgkkxkkkrp
6-7 b: mgzhbbb
9-12 w: wjwxwwpxxtwvwwjnnw
2-5 x: xxlwcpzfx
4-11 j: jjjxjjjjjjcj
6-17 c: qcccsvvzfpccccfchcc
3-4 c: scbjdmjhtlcdvbq
8-9 b: fngpbvfsctl
15-16 r: rrrrrrrqrrrrrrdlt
5-10 v: tvqlvvvtrvlfkwsvlvn
6-8 q: qqsqfqqqq
8-9 m: mmmmmmmms
8-12 r: rxrrprvcrrjd
19-20 c: cncccqwnbsvccclcjkcc
2-4 b: mmjg
12-13 l: slwjlqlslllll
2-8 m: fmmppmmmmtmzmmmm
4-13 l: llllmllllllllltz
6-11 f: ffffffhtffff
1-6 g: gngfzbgx
1-5 f: fwfmfrfxf
16-17 t: ttttttttttttttttt
2-7 w: twsdwvj
6-13 m: mmksmfnmdxtmhmmxm
1-6 b: bbbjbbnbzwgrb
13-15 c: ccccccccccccccsccc
7-8 k: kskkkgkkk
6-7 g: gggmgbzg
17-18 k: mckjkfkdfqkxgtrcrch
4-5 g: xglggggs
2-4 d: ddddddd
5-7 s: nlpzsss
5-12 w: ngwpwprvlftr
15-17 p: psgjvphpbppzpprpp
1-5 m: lljdr
6-8 h: hnzhhqxh
4-7 g: mmccqwfvlqrks
12-14 l: lllllllllllllll
2-3 c: cqfc
15-16 z: zzzzzzzzzzzzzzzz
6-7 v: gkzxvvvdbvnp
7-8 z: zzzjzzvc
13-18 v: vvvvvvvvvvvvkvvvvlv
1-12 p: pppppppkppppppp
10-12 v: vvvvvvvvvtvvv
5-6 s: qkpsqz
5-6 t: tgthtlt
1-5 z: zzzzzz
6-7 j: jjjjjjhj
4-5 b: lbbqdfrbbv
4-6 n: jvmxtfwnqpdhn
2-5 r: mcmrf
8-10 s: sssssssggsss
6-9 f: ffbflgzsfftxqg
1-18 p: pppppppppppppppppp
3-13 b: bbbbdfbbbbbnbbbblcb
5-6 d: drddpk
4-5 h: jhhhdh
12-18 x: wxtsqsrxtsxxxvhxfxx
5-6 q: qmxdnz
6-16 q: qqwqfqqqzqqqqfqqq
4-10 x: xxxgxxxznx
2-3 x: xndnnb
4-5 g: hcgff
5-6 s: wsgjpgssssssdssssss
16-18 k: kkkkkkkkkkkkkkkkkk
5-6 k: kkkkpqkk
13-19 r: rrrrrrrrgrkrrrrrrrr
10-11 s: vgnbshssjcpss
3-5 f: qfhjmjkcgv
3-4 q: nrtnvbsmbwpq
8-18 j: jjjrjjdtjmjjkjwzjjk
4-14 t: tttgtttttttbtxt
5-6 q: qqqqtj
14-17 b: bbbbbhjffbbtbbbbb
9-18 x: rxxxwxxxxxxxxxxxxc
3-9 f: hgjjfkvlflhbtxpb
7-19 n: nnmndnknnlnjnnnnnnz
5-8 m: mbmlmmfpgmwmm
7-8 j: jjjjjsdkjg
3-8 p: hlpjkpjjvbrgpw
10-11 t: tttttttttptt
6-10 b: bbbbbthbbd
3-11 l: xvlknhhglhcgvk
7-17 j: mpxjmcwwqqjtprwgjj
14-17 v: vvvvvvvvsvvvvhvvvv
16-17 p: pppppppdpwpppppppp
3-4 h: hhdr
8-9 v: bvvvvvvfs
6-12 p: pdpppbppnqpxp
3-6 w: jlwwjvcwwhwjrgwzjkqw
3-4 c: zqkzcc
2-7 h: hzhhhhv
1-9 g: mgjlggdznj
3-6 x: nxjxxkxhfx
7-11 m: pmpmmmmmmmmmtmm
9-11 t: tttttttttttt
3-4 n: nnnpqnbfnnnzn
10-17 b: bbqbbbjbbhbbgbthxb
2-8 n: qfqnjhhjsvcvcnnjnnhn
3-6 n: jsgnnn
1-2 n: nntknsnsp
5-7 s: ssssssss
8-9 l: kllllllllh
4-9 k: vkkkkkkkkk
3-8 x: hxdxbxnmxx
5-8 f: pfmvlbffff
13-18 n: rnncfnnntnrgxnnsnn
1-2 d: jxdd
3-5 p: bcfdp
2-4 k: hklkk
13-17 w: wwwwxwwwwldwwwwwm
4-5 z: gzzzgczz
14-15 g: gggggggggggggqg
9-10 x: jzwnmqhgqkxhxb
3-4 z: fszz
13-14 l: nlllllllllrlflllx
1-3 r: rrrr
15-16 c: ccccccckcccccccccl
1-6 h: hhhhhhhphhhhjfhhwjh
5-7 r: gvcprfrrgtqjkgsbcb
12-14 v: vvvhvvvvvvvvvvvvv
18-19 l: llllllrllllllllllpgd
13-14 x: xxxxxxxxxxxxxxx
7-13 d: pcgbdmkhnnxqdhb
9-11 c: ccccccccjcf
14-17 m: mmmmmmmmmmmsmmmkmkm
7-16 p: jblsmjhskpmcflvzqbb
1-3 p: pqpzfpw
6-8 h: whhtglkhshhzhh
1-9 x: xxjxxxxxxxx
2-3 d: ddgwh
3-4 z: rzzz
12-13 p: ppppppppppppppkp
2-6 f: fbffjbxz
4-7 f: dmkrhsfnffg
4-6 p: ppppppppp
17-19 d: ddnwdddddddnddddndgd
4-8 n: bxchqdknggfjqzcvdwzv
3-19 z: zzzzzzzzzzzzzzzzzzpz
2-11 h: hhthvhrhpkhfrljhf
7-8 s: sssssgsg
1-3 p: hpsp
4-5 d: wdkdd
2-4 j: fjpd
2-8 l: dsvhdlpl
11-15 b: bkbbqpbqbbbbbbfbr
4-9 j: vffrxjvglzq
17-19 q: qqqqqqqqqqqqqqqqqqqq
2-9 g: sbpcvnmsghrm
3-6 r: kxwwnfbqv
9-12 w: qxwwwwdwwcww
4-8 t: tttztttxt
5-6 k: sklmkk
1-15 t: qttstmlgtxjfwthj
12-15 s: sssssssssssssssss
1-8 d: ddtddbddj
7-14 m: rmmhmmmmzvmmmkxmmmdm
5-6 n: nnnnnwn
7-8 m: mmmmmmghmm
1-3 q: qpqqgkc
3-10 q: qqqqqzqqqqqqb
1-7 p: ppppppqp
3-5 c: nbkfmcccpkjccv
14-15 q: qqqqxqqqqqqqqqq
8-9 p: plgpblsfp
10-13 w: wwtwwwwwwwwvwww
8-15 k: kkwjkkkknkdkkkkk
6-7 l: lllllmkl
8-9 l: lllllllxgl
10-12 p: gpmpppppppvpvpqpx
4-7 x: rxbxxxzqx
1-10 h: dhhhhhhhhxh
12-18 v: vnwvgvprbfgvvgnvvv
4-17 n: xbdnmnrrcfmczhjxndr
8-9 k: kkkkkckqskkk
9-12 l: rblxmkxmlfflnfpg
6-11 q: vqlqqqqqqqqqqqqnq
8-10 j: lxpjjjjjwjglcjhjjj
4-6 x: xtxxjx
1-2 w: wwwww
5-8 h: hhhhkhjhhwh
7-10 s: stjsssdssdl
2-12 p: xwnzxpzwnxzc
4-5 v: vkvvvvk
1-6 k: ksgmxkkdcfqgxcxm
16-17 g: ggggggggggggggggg
9-10 g: ggggggggmcg
9-12 m: mmmmjzmpmmmx
2-3 r: lrrlrtmbcl
2-3 s: sqss
9-11 k: kkkkkkkkdknkdpkbkkk
13-15 t: tttttttttttttttt
3-5 p: ppkfkn
4-5 d: dddtk
9-13 b: hbmtbzspcqtwqfkbbbdb
5-7 d: dddtddhdddddddmddddd
6-7 q: qqqqqsl
8-9 k: kkkkkkkkk
3-7 d: gdcwjglkw
6-8 s: srtgjdsn
8-9 r: fxrgqrsrs
5-10 x: xxxxlqxxxxxxxxx
2-3 s: ssskpmzhqpp
2-10 q: qqqqqqqqqqq
5-12 r: srnqrrhkgrjr
1-3 s: fsmsssss
1-2 f: ptbtfm
9-10 b: lbbgrbqhnhbcnmb
1-3 x: xxnx
1-3 w: gjfh
3-8 q: qwqtdvqql
3-5 f: zfmcgpdlp
6-8 h: vhhhhhbh
4-12 c: lkbcvnztjnpxvlcf
4-6 w: wwwwwwwpwwd
10-15 v: vvwvvvdvvzslhvz
4-7 c: jpvmlffcgdkmcl
6-7 l: llllwlll
8-9 m: mmlmlmmnmmm
14-15 m: mmmmmmmmmjnmmmmkz
3-6 t: thttttt
3-14 t: kvltjtmkbvhtbt
6-7 j: jjjjvjjj
5-6 m: dmnmmmknqwmmmkm
8-12 s: ssksssssssssr
2-6 r: srvrqrdwxnprrvpqhd
6-11 l: lhllkdxlllln
2-4 t: qmmd
3-12 s: sssssssssssrs
17-18 t: ttttttttttttttttqf
2-5 r: qcbrr
14-16 h: hhghppchchfhhhlhm
15-17 g: nprhksgfwwjgggkkc
7-8 g: gggggggn
5-15 g: drgkscpgchvzmjs
1-3 l: fsztllllll
4-5 p: ptftp
5-6 j: jjjjjj
1-4 f: ffjfhz
9-10 q: qqtqwslqqg
6-20 h: hgklqhcmhfmxvcnxvxch
7-8 c: jcwbrvcc
8-10 m: mwmmmmmsmvmsf
8-9 v: cfvrvbvzvvvgvpk
14-17 s: srkhgbthtssxszqvsbsx
4-7 b: sbpffpbxv
9-11 z: zzzzzzzzzzzfztz
9-12 v: hmvvvvvvgvhkvvcvvvb
1-6 c: fkcjcwqccs
13-15 r: rrrrrrrrrrrrrrrrrnr
3-4 g: ghgg
6-7 b: wbbbbbbbbbb
7-8 t: trttdtttjbktt
3-4 t: wtttct
2-4 c: xccc
5-7 s: ssspvlrslxn
1-3 s: lsss
4-6 h: hjhjhghh
11-17 s: ssjrsscslskssqssn
1-4 j: rzjjjv
7-8 f: tvssgbrkqdtc
5-8 w: wrjklbblzwdclwnwjwx
4-8 r: srrrrrrr
1-7 g: ggggggg
7-9 m: msmcmmmbwgxkmmnmm
7-10 w: wrwwwvwwww
7-11 g: rgkzgdgpldgc
11-16 p: pppdpzvzpppqrwppv
3-5 n: hnnnnn
10-12 n: nnnnqnnnnmnwnn
6-9 k: spdbkgkxzlqkkkkk
2-5 j: jjjjjjjj
2-4 n: njnzn
7-8 c: cclmcchjcbc
13-16 k: jkrxkmtxfkxfccdklk
8-9 f: fffffffjkfffnpffvfff
8-10 x: xgmdzfxxsc
7-12 k: fknkjrklsrkkkhqknkv
10-12 l: lslzlpllblllll
3-4 f: fffvfff
16-19 j: jjfjjjjjjhjjjjjjjjj
1-3 h: hhhhhhhhhhhhhhw
8-11 n: nnntnpdnvkqt
9-10 n: nnnmnnnnnnnnnn
3-5 c: qbcccchvccf
8-9 s: sssssjsmqj
4-5 w: zwwrxwwfwpwwz
7-9 m: mmmmmmvmf
5-9 w: wwwvtwwwm
11-13 j: zjjjjjjjjjjljjjcjjj
2-9 c: zblcmvmcfc
16-17 g: gggggggggggggggqk
12-15 p: pfcpppsgppxbjvqppppp
4-6 l: ssldtlc
5-8 h: shtphhdhhhhm
17-20 n: nnnnnnnnmnnnnnhnsnnp
12-17 s: sscsrsssdsssssrssss
2-9 j: tjlffpwkjmnj
1-6 p: cpxfpdvjb
10-14 b: bbbbbbbbbhbnbbsbb
3-4 h: hhhnh
1-3 j: rkgjvqkgs
16-17 w: wjwzdwwwwwsxbtlfs
9-11 r: rrrrrrrrrrrr
1-5 d: dtzqdd
5-7 p: pprpppp
6-7 n: nnnnnnn
1-10 k: kkgcklpqzkk
2-4 n: lvxnntjnpwhrsxlnhn
3-6 h: hlhhhxhzh
6-7 c: zccccccc
1-4 z: ztczzzzzzzznzztnlkjz
5-6 c: cccnccshkcpgjhn
3-4 h: hhbh
1-4 m: gmtm
13-18 d: tldhjsdhdthhldzfgjxg
4-5 d: dddddd
1-3 r: rrrr
7-8 b: bbbbbbbt
12-14 z: zzqzbhzzzzzzzz
5-7 v: vqblwrw
8-9 c: tccccdcrccccqc
9-11 m: mmhmmmnmqmtm
3-10 n: dnwzhrfnqt
3-4 t: xnkfpcqtcqkctxrrm
2-7 l: lllllllll
2-7 g: rdnskwgwcgnrzncqtnp
11-13 s: ssssssssssqsw
10-12 m: mmmmmmmmmcmqqmmpmm
4-8 n: gnqnptxnhgpnnnn
6-7 t: tttttcct
2-3 s: sssssss
9-10 h: hhhhhphrms
3-6 d: vdxdddddd
8-15 k: kkkbkkckkkkkkzgkkk
4-10 n: ncntnnnnnnn
3-9 r: snrkcrrcvrx
7-11 s: sssssgwsshks
1-4 h: hfch
10-18 l: llllxllllflllfllsnll
13-16 x: xpwcxpxxxxfqxnxx
2-3 m: mvmmm
3-5 l: ljlzs
8-13 t: tgttttmmrfthttwt
2-9 t: vttjddjxtfrlw
3-5 r: frrrr
4-5 s: pssnm
4-5 h: jcphhsnrm
2-3 d: pjdd
2-3 g: gdgk
10-13 v: svtvvvvvxwvvwv
4-5 l: lqlll
13-14 s: sffbffsmssscss
2-3 j: fkkfmzqjnfvdjr
16-18 z: zmqzzgzkzzzglhzzlzj
3-4 h: hhfh
11-13 s: sssssnsspshswhsssss
7-9 g: gvgggrmgzr
1-5 p: hppxnlkgcpppppppp
1-13 q: qqqqqqqqqlgqqqqqn
3-5 x: xxzxpx
3-15 x: xcndrhtnpbqwgsxtzqn
9-13 d: nrhbddvslmwbs
8-10 g: grggggxggxgg
10-11 h: hrfprqnhbhh
2-3 r: rpzr
14-15 d: ddddddddrdddddd
7-8 b: zbbbbgbbbbpbbv
12-18 v: vvvvvvvvvvvfvvvvvvv
7-13 r: snkkjtnkrntjfd
1-7 g: ngdndgg
1-10 h: hhzhhhhrhhhhhhhh
6-7 x: dxrxxzs
6-7 x: xxxxxxxxxx
8-11 v: vcvvvvxvvkcvlvvvvvv
3-4 n: nrzh
8-12 x: xxxpvxxttxxfmnx
9-10 r: rrrrgrrrzr
2-8 v: lbtvvvzqvzsg
3-5 d: dkfbwlrg
13-14 k: kkkkkkkkkkkkkk
6-8 x: xqgbwxxxppgxz
1-4 n: pnnr
6-9 l: hglpllcnl
1-4 x: xxxx
3-5 n: lnzwmhjnndjdmknnqtnc
8-13 t: tttttttnttttjttt
7-11 s: ssssssssssvbn
1-5 l: lllllll
2-6 v: rvvzvvzcgv
6-8 c: tccckcrc
2-3 q: wnqq
2-3 p: pplpp
3-4 f: kxfwcfsk
1-6 m: mmmmmm
3-4 n: zgnnprvnns
17-18 z: zzzzzzzzzzzzzzzzwhz
3-11 w: wflwwwvwwhrgwwrwwwww
9-13 g: ggggggggpggggg
2-6 r: trvcwrr
5-7 p: prtjptws
7-10 b: bfbjwjlkbsbbwgk
3-5 z: zzzzzzzzwhzzzdznz
4-7 p: lphppppppp
4-5 n: nvnnnsnn
7-9 b: znbhbtgbw
1-11 w: jwwwwwwwwwgw
10-13 w: lwwwwwbwmwwfqwwr
5-12 p: ppppqppppppt
1-10 j: jjpjjjjjjjjjjjjjjj
6-9 g: gxgfgjmggggg
7-12 c: cdccccgcccgc
7-15 m: mmmmmmmmmmmmmmmmmmv
4-7 n: ndwjpvgnh
5-9 s: cszftmnqmssfqs
1-11 m: zmmmcdcmfmdbmltmf
16-17 s: zrshsssxssssssxfs
6-17 m: kphrlmrcmpskjcmmmg
3-4 j: jxjj
2-3 f: ffbfs
4-7 v: vvvvvvvv
1-7 f: fffffffff
1-17 d: dtdftddsdddddddsdd
8-10 c: ccrccccccsc
2-8 m: hqmmmmmpm
2-5 j: jjnjjjj
7-8 s: vsszssssss
3-18 g: ngpggmgggggggggggfgg
14-16 r: rrrkrqrlrrrjrrrpwtr
2-3 h: hshs
10-16 r: mrxdnzxmvrplhmrr
6-7 q: hwqmqqqqqql
3-6 z: rgtqkw
1-13 k: lkkkkkkkkkkkckkk
3-5 t: ttxtt
3-9 s: ljsvzbfwshssrc
6-7 z: zbwzjgw
1-11 n: ptnqltlkrxv
8-9 l: lsllllllhl
2-8 v: vvvvvvvzvvv
5-8 s: ssslnsssssssssl
7-8 k: kpkkkkkchlk
15-18 v: vtvvvvwvvvvvvmvvvb
11-13 m: mqmpjsmmlkvnmnfmwqmq
14-15 k: kkkkkkkkkkkkkljk
13-14 t: tffbtznjgtcnts
5-6 z: kkkpzzctq
4-5 h: jhbhzr
5-7 v: vqvvgxv
6-10 d: dddddpdddtdd
11-12 g: ggggggggggvggg
13-18 f: ffvfffxhrfhrcffpgnff
6-10 x: nsxgwsjxfthhxxgxg
2-5 w: wfvpmwtwg
9-10 l: lljwlllfxcll
2-5 b: rbbbmbbbbbbbbbvbbb
5-13 p: jjffpmbpppmtpf
1-5 r: rrzrrrrkrr
1-2 m: mmmmmgmm
16-18 z: zzzzzzzzzzzgzdzqzz
6-7 l: llwfxll
6-9 j: jjzhjjjjjjj
4-7 k: hwskvkk
2-3 d: dddddq
4-6 b: bbbbbbhbbbbbbbbbbbbb
7-14 l: lnhmlwzxlsldlx
2-4 m: msmmh
4-10 z: vhkrzzcbzzrzdcq
4-7 p: dnppppwp
5-7 z: mzzzzzzz
5-7 b: bbbbbbb
1-5 t: rrbtt
7-11 x: bjxqxtxzlfxpmkpqtnd
7-9 k: kkkkkkkkkk
8-9 d: dhfddpndbhqdtdwdtn
18-19 k: tnkzkdkkkgkkbckkkkk
8-11 f: cfnqkzffgxf
2-4 x: xxwxxsx
8-11 m: mmmkmpcmmvgxmmmcmm
13-14 z: wfzlzzzzzrdxzlzz
2-4 n: frns
4-5 q: qhqqqq
12-18 w: fwwwwdxxzvzzgwpwlk
12-13 n: nnjnnnnnwnnxgnn
8-11 c: tcjcbcwctkccr
4-6 m: jvmhtq
1-2 b: bbbbb
11-12 q: vqfqvqdnsxqq
7-9 m: mgmjmtmmzmmhrm
9-10 t: ktvnttttxl
8-10 r: rcrrdrrdgsrr
7-8 m: bvlmhxfxnlmfbz
3-5 c: bhczc
1-3 w: nwwnwwxww
3-5 l: jcllld
1-10 b: bbtbqbtbbbbtbbbbbbb
5-7 x: vsxxxxxx
3-4 k: gdkv
8-10 k: kpkkwzkrkjkkkm
3-6 l: hhlmll
16-17 x: xxxxxxxxxxxxxtxmx
1-4 w: wrkw
1-4 t: gzpkttttt
2-3 z: zzzq
13-14 q: qqqqqqqqqqqqqq
2-19 d: vdwfzsfqtqbglgrfdvd
4-6 x: dxtnxzx
3-5 g: ggggg
6-7 m: mmmmmjj
15-16 t: tvtttttvbttttttt
5-6 k: kdztgkx
1-3 d: dddd
5-14 h: hhptkkcpqphhdgw
13-14 j: hvmrjdcjhjjfgbmw
10-14 h: hhbhchhhhwhhnhhhthh
2-3 f: jcstlgbdf
3-4 w: kwww
2-12 b: bbbbbbbbbbbfbbbbbbbb
2-4 x: xxxs
10-11 c: qmrtcpztvcc
7-12 l: llptfltlllllzllzl
14-16 m: mmmmmmmmqmmmmtmr
10-18 m: mgmmmnmmbbvmmmmmmgmm
4-18 q: kqlrkhrqljbgwpmpnq
3-4 c: czcdc
2-13 k: jnmzxwvgfldnz
11-12 b: bbbbbbrbbbbb
6-11 p: psfpzrpfpqkzpvppt
9-11 p: mpspjjxcpqpdppppph
4-17 t: tdtftttttttlttdtttwq
12-15 r: krrrrrmrrrrdrrmp
2-3 x: xczx
1-7 j: mjjgjjdjj
2-8 x: jmlxxxxxxxrxxxx
6-7 l: qntxbml
7-12 k: kkkkkkvkkkkfkk
2-7 z: nsgtlfdrsp
7-9 m: mvmmgmjmm
3-7 t: ttttttt
2-9 b: gbczjbbbblbbb
8-12 j: jjjjjjjljjjsj
9-11 h: dmrjmzdwhhhqz
6-10 j: jjjjjjvvjfcp
1-6 t: tqsznxwnnrnmjt
5-8 f: rpffhjnlkxplffhm
8-9 d: fddddddddddcdndddrdd
4-5 k: jkkfckkk
3-5 l: llglkqllll
3-5 k: zkzknkkk
5-7 d: nddddnq
9-10 j: vjgjlfcjjjfxjjmjrzwk
2-4 m: fdxm
5-7 c: cvqgkhvtbccc
7-20 j: rscsdsjzflbldrwqvkjj
4-5 p: pbxpppp
3-4 h: vnhhvlbtbqshhcsxhs
4-12 k: hkdkfxkknkkkkck
4-5 g: gggvq
4-5 h: zhtch
8-12 m: tpmmxzmgmmln
9-15 c: ccckfccjznpclnccxc
9-12 p: pppppppptcpfpppppppp
15-17 g: ttdlnvrknskcgvrgnm
7-12 r: rrrrtrtrrrrjlrrr
4-5 c: rccclxc
3-5 d: hbgzddt
4-5 x: cxxxx
3-4 k: kkpc
8-9 j: jjjjjjjrhv
5-6 p: ppcppp
14-15 h: hqhhhhhghhhhhlrhh
5-10 z: zzzzzzzzzzzzz
6-7 m: mhdmmzpmmmp
1-2 j: knjj
2-7 m: mmqnmjmtkz
2-3 j: jzjjjjj
12-15 g: gggggggggggngggg
6-9 h: hrtllxbqgcrf
3-4 c: ccccc
7-11 g: jclgcjgngkzggg
6-9 s: qwnvpsvbsmwqpqrst
17-18 k: kpdkzkkkkkkkkkfkksk
1-3 v: svnv
4-6 k: kkndkkkkk
12-15 z: zzzzzzzzzzzdzzzz
3-9 z: zzzzzzzzr
7-10 w: vgwwwcwwww
10-15 n: vgxnnnqnnnhwsbnxpnnk
2-4 v: fxhvh
11-12 h: hhjhhhnchhhhhhhh
3-9 z: vzzczzzkzbh
5-8 k: kskkkkktkk
3-7 s: sswssxt
4-7 g: rggdggg
4-7 c: zccpcccc
6-11 z: mzlrssckpzvzslcwzzzz
8-9 v: vvvvvvvvvvvvvv
1-4 f: fffffffffffffffff
8-10 f: tjfffmgrfl
3-5 k: kfwnp
6-7 t: pvtstmq
3-7 x: cvxkwxxgpjxskkvsxp
1-7 c: cctcckccccxc
1-3 g: vfxvfxmhpgg
13-16 m: fmjplfbgzzkrmcmv
3-6 l: llmllc
17-19 j: hjzjrbpjzjdjjvbzjjv
7-12 q: qqqqqqqqqqqq
9-13 n: nnnnnnnnqnnnxnnv
17-18 n: nnnnnnnnnnnnsnnnzh
6-15 f: rswffffffkfffkxfjf
3-6 v: vvvvvvv
9-11 d: ddddddddmdf
19-20 k: kkkkkkkkkkkkhkkkkktg
9-11 f: ffffqfffnfl
6-9 r: rrrrvrrrr
5-6 g: kgdfggggng
17-18 w: wwwwwwwwwwwwwwwwrm
5-14 t: tttttttttttttqtt
13-15 n: nnnbnnnnnnnntnn
4-13 g: rlhgcffsgshcg
4-12 z: mbfztgsbkscpqwl
18-20 p: mmflppmwzscjcgsxdddd
1-6 k: kkkkkkkk
18-19 n: qxkljbmdgsfsnknfhjb
1-2 h: nxnhh
2-11 f: fxffffffffxffffkffff
4-11 k: mqvktsksvkkwjbtvg
13-14 m: kmtmzqmmjmmmmmmwkm
3-5 t: ttswxtt
11-12 b: bbbbbbhbbblbbbb
9-10 w: lkhccgmwvd
2-3 t: thttl
12-13 b: bbbbbbbbbbblb
8-9 w: wdwwjbwblwww
4-5 h: hqphz
9-14 h: hhhhhxhhzhhhhht
9-10 x: xxxxxxxxxxx
4-7 m: dgltmmrdvmfmd
9-10 h: vltrhtgblsmlmnbvml
6-10 p: gkpppbppspp
8-9 c: scjdvbpwn
4-15 f: fpfnffffffffffhn
10-14 s: sssscswsssssss
4-10 j: jxdjfscnmgj
6-12 w: ksjdxwckwwwwwfzwsgz
1-8 j: jjjjjjjtj
1-3 d: kgpvfv
2-12 w: wwwtwwwvwwwwrwwwwww
4-6 f: fkbdftxqtxjwfvf
7-8 p: pppppppk
12-14 g: gmgvgffnggjkgggg
3-4 x: wxkgxxxx
3-7 n: nnnddmcjcrtnnfhnx
4-5 k: kkbmxkk
12-13 b: bbbkxbbbbbnbbtbbgb
9-11 h: hhhhhhhhhhhh
4-6 q: lmgvsfqxmqhvzqqt
13-15 t: ttttvtttttttfhm
1-3 x: hxlw
9-14 v: gjrvgrmvvvdcvv
5-15 z: zzzzczzzzzzzzzzzz
1-8 s: tssssssss
10-15 h: vhvhxthvhhhchhshfh
1-9 l: lllpllqklmlk
12-14 z: zjzzzzzzzhzkzz
3-8 w: wlzzflnmflwdnp
5-7 s: sgsdssss
5-13 h: hnhshhnklhqbhh
4-6 b: xsbbbxbbpbbbbb
14-16 c: cccjgccccccccmvc
5-11 r: nrrrrrrsdjrrk
6-12 s: gssjtjssfhjsssssss
5-6 j: jjjjrs
14-15 d: dddddddddddddddd
10-11 z: zczzzzzzzzzczzzzzz
2-4 q: qqqj
7-13 f: fffffhfffffff
13-14 q: qqqqqqqqqqqqjfqqq
8-9 w: wwwtcwqjw
5-6 x: xcrfxx
13-19 r: rdwfrghfrcnjcdjxtrmr
6-9 h: hhdhhhmlg
7-11 p: ppgpppgppdq
5-6 m: msmrtxm
14-15 j: kjkzrslzdzgrfjjjj
14-15 f: fqjfffwsffzhmff
15-16 d: ddddddddddddddvmdd
10-11 w: wslwwcwkzrvkg
1-3 v: kvvvv
6-12 q: qqqqqbqqqqqzqqqqqq
15-17 m: mmmmmmmmbmmmmmfmxd
1-10 t: sttttttttvt
8-9 q: qqqqqbqwq
14-15 t: ftgtttgftxttwtt
5-9 p: bzkpxnfnj
2-9 h: hhngqknrhd
10-11 h: hhhhbhvhqhhhh
5-8 v: dvstzxwtp
3-5 q: qmzpbmmwsqwzr
7-8 r: rrcrrrrr
3-4 w: wwwt
1-2 l: pzzl
4-13 h: trpbbrhnxnkbrkmgdk
4-5 v: fgxmv
5-11 d: dddgddxrdbmsddj
7-8 s: ssssssss
5-7 m: dfmksgsdmcbjrmk
4-7 s: tsqcssrzs
4-5 j: jjjjjjl
6-10 s: vkwshtpqjxslssxm
3-4 z: zzdfzz
1-5 m: fkhmw
6-11 f: twtfbvwbbsfff
2-9 f: fzwfjljxfxfkjfl
1-2 d: ssddd
5-9 k: kkzkscklbqtkkk
6-16 v: vjfbmnplzwtkxlvdqwn
5-8 g: ggnlkgdh
11-12 s: qbswtxnplqss
3-6 r: rrrrrr
10-11 w: wmhwswwwwfwww
3-9 c: tcncldghxp
3-8 q: wqtqgbpz
17-20 b: bbhblqlbggtsqcbcbbkt
7-15 f: fftffcxgfzttffmbrff
11-12 v: vvvlvrvvwvvqskvvxv
9-11 h: hdjcxnkhxhkqhh
5-12 l: llllqllllllnl
17-18 z: zbzzbzzzzzzzzzzptc
2-6 c: cgmrpjdhkcp
4-10 x: xxxjxtxvxxvx
11-15 s: sspsvsjsssskzbsss
2-4 z: rsfd
4-16 r: rrrrrrlkrrrrrrrrr
10-11 x: xxxxxxxxxpxxxxx
1-10 j: tjjsvjmxcb
4-5 t: tttbbtvttptttsthw
7-11 m: xmxzrnmksbm
2-6 t: vxdspsgtftlptvqft
6-10 k: kkkkmmdkkl
3-5 l: sssglkvfvdskkghdhkxs
4-6 m: mljkmwmnmm
4-7 l: lllllrh
5-11 x: bsmxjxxcmcxxx
1-2 t: tttt
9-11 p: xpppppppcppd
15-16 w: wxzxtwzjrmvkwzdwjt
13-15 l: pnhkxsqfrldsltltcf
4-10 v: vvvrvvvvvvv
6-11 m: qpbmsmbsxpmzg
1-7 m: tmmmlmcmmm
10-14 s: ssshsssscxssszs
1-7 q: tdqxmqkxgkt
2-4 m: bcmq
3-4 d: ddjd
13-17 r: rrrrrrrrvprrrrsrx
3-8 p: fjwbkcdt
1-6 k: gskwbl
7-8 z: wzgzhlzs
5-6 v: xvvvlmvvsvbsv
1-18 f: ffjcfbvrtftffxvfff
3-8 l: lbtjlllqc
4-7 v: vnvvdsvl
15-18 d: ddddpdddddddddcgdrdd
3-9 f: fffffffff
1-5 v: svvjvvlpvwmvvgc
13-14 z: zzzzzzzzzzzzmz
6-8 p: zcwptpgppfpppc
8-14 j: cjrzvhjjmdpzjjqs
16-19 s: sszsssssssssssssssss
7-9 r: rrrkrrrrrnrrmj
2-4 l: ldln
3-5 p: pppvprp
1-5 k: kkkkkk
1-4 g: ggxz
2-4 x: xwsgv
15-16 v: vvvvjvqvfsktgvlvvvv
17-19 x: xxxxxxxxxxxxxxxxcxx
1-8 m: mmmmmhmpmms
2-6 f: lffzdfsf
2-3 p: jphqlvzfmpnmt
2-11 g: ggrjthgdmggkgssq
5-6 r: rwgrrr
4-7 t: tttptmlthlfst
5-7 v: bhhdvhhv
8-11 n: nnnnnnnmnnnnn
7-20 r: rxrqlrwrnrsrrvbvtrrm
9-13 s: pfslddbsshsssrsrssls
3-10 q: vwbwhvdfqqvghjzf
9-14 b: bbbbbbbbbbbbbvb
2-3 f: pfff
3-9 r: trhrrrrrgrrn
7-11 z: zzzzzzzzzzzz
4-6 s: xwssttdqtc
7-9 t: ttzmqqdtqtt
6-19 g: gggggggggggggggggggg)";

constexpr char input3[] = R"(.....#............#....#####.##
.#.#....#......#....##.........
......#.#.#.....###.#.#........
......#...#.....#####....#..##.
...#............##...###.##....
#.....#...#....#......##....##.
#...#.#....#..#..##.##...#.....
.......#..........#..#..#.#....
.#.....#.#.......#..#...#....#.
#..#.##.#..................###.
...#.#.##...##.###.....#..#...#
..#.#...#............#.......#.
#..#.#..#.#....#...#.#.....#..#
#......##....#..#.#.#........#.
....#..#.#.#.##............#..#
....#..#..#...#.#.##......#...#
##...#...........#.....###.#...
..#...#.#...#.#.....#....##.##.
....##...##.#....#.....#.##....
#........##......#......#.#.#.#
....#.#.#.........##......#....
.#......#...#.....##..#....#..#
....#..#.#.....#..........#..#.
..##...#..##................#.#
.....#....#.#..#......#........
........#..#.#......#.#........
.....#.#....##.###....#...#....
...##.#.......#....###..#......
............##.#..#...#........
#..###..#.....#.####...........
.......##.....#......#......#..
#........##..#.....##.......#.#
#.##...#...#...#......##..#.#.#
......#....##.#.#...#...##....#
#..#....##.#......#.......##...
.#..........#..........#....#.#
#.....##......##....#..........
..#.#.....#.#...#........#.....
...#........#..#..#.##..##.....
......###.....#..#...#.###...##
.##.##.......#.......###...#...
#.#..#.#.#....#.....###..#...##
......#.##..........#.......##.
#..#.#.........#.....##...##...
..#...#....#....###.#......#...
.....#..#.######.....#..#.#....
..#.#.....#.....##.#....##.#.##
...#.#.#....#....##..#..#.#.##.
...........#.#...#..#..####....
.........#####.#.#.#...#.##.#..
.......#...#......#.##.#.##....
....#.....#.....###..........#.
.#.###....##.#..#..........#...
#...#.........##.....####....#.
##....##...#..........#........
...#.#.#.#....#..........#.....
.......#....#......##.......#..
.#.#..#.........#.#.##....#....
..#.............#..##.#.##..###
.#.##..............#..#..##..#.
..##.#..#......#...##..#.##...#
......#..#....#....#....##..#..
...#...##.............#..###...
...##....#.#.##........#.....##
....#.#.......#..###..#....####
#...#...##..#.####..#...##....#
.......#..#.##..#...#.#........
###.#......#..##..#......#.##..
#....#............#.....#......
..##...#..##......#..#....#....
.#..##...#....#.#...#...#..#..#
........#....###...#..##..###.#
.........#....#....#..#.#.#...#
.#....###.##...#.#...........##
..#..#.#..#.#.##..#...##.......
##..#.#.#....#...#..#..........
#..#.......#....#..##...####...
............#.#..........##.##.
#...#..#.#....#..#.#....##.....
......#...#...#.##............#
#.....##..###..#.#..#.#.##..#.#
#..#.#..#......#.......##.#....
##..#.#..#...#......#.##...###.
.#....#..............#....#.#..
..#.#..##....#....#..##........
.#.#...#..#.....#.#..##........
.....#..#.#......#....#.#..#.#.
....#.###...###.#.#.....#......
...........#.#....##....##.....
..#..#.##..........#...#...#..#
.....#.###.#..........#........
....#....##........###...#.....
.#.....##.......#....#..##..###
#.....#...............##......#
#..#.#..#.#.#.....#.#...#......
.##.###...#....#..........##...
.#.......#.....................
.#.#....#...##..#...#...##.....
.#.#...#.......#.......#...#...
....#.#..#.#..#...#....##......
....##.....#.##....#.##..##..##
..#............#...###.##..#...
.#..#.........#.##....#....#..#
.#..##..#..#........#.#.##.#.##
.###.#...#...............#...#.
...#.##.##.#......#...#....##.#
#......##.......##...###....#.#
#..##.....##......#.#.##....#.#
...#.#....#.#.#...........##..#
#.....##......##.#..........##.
###....#.#...#.#..####.........
.##.#.#...##..#.....#..#...#...
#.....#.#......#..........#.#..
..###.##.#...................#.
#.............#..#........#.##.
#.#.#.#..#.....##..##.#....#...
...#...#..#...#..##..##........
...##...##..#...##...........#.
.####..#.#.#.##.#.......#......
...#....#.......#......#.......
.....#.#...#...#..##..#..#.....
......#.....###.#..#..#.#..###.
.#....#....#..#..##.....##...#.
.#.............##.###.#...#.#..
#..#..#......#.###............#
##.#..##....#..........#.#.#...
......#........#...#.......##..
....#.#..#..........#.....#.#..
...#..#...#.#...#........#.....
.....##...#....#.........##.##.
....#...#...#.##.##...#....#...
.#..#.....##......#..#.#..#....
........##...##.##......#.#.#.#
.................#..#.....##.#.
...#.....#...#.........#..#.#.#
....##.#.....#........#...#..#.
#...............#..#.....#...#.
.....#..#....#...#.####.#.#....
####.#..#.##...#....#...##.....
#...##..#...####..#....#.#...#.
..#.......#.##..##...#.#.......
...........##.......#....#..#..
#.##....#...#.....#....##......
....##.#.......#..#...##.......
...#.........##.#..#......#.###
.#..#..#....#.#.##....###..###.
....#.#........##........##....
....########....#.#.#.###.#...#
...#.###.###.##......##.......#
.#...#.###.......#..........#..
..#..##.........#............#.
.......##.#...#...##...#...#..#
#.##....#.#...#.....#..#.#.....
..#........#..#.#.#.#....#.##..
...#...#.#.........#...#.#..##.
#....#......#.#...........#..##
...#.#.#..#...##...#...#...#...
###..........#.#..........#....
..#....#.#.#.#............#.#..
....#...#..###...#.#....#......
#...........####......##.#.....
..#..##.#...#.....#..#.......##
#.....#..###.....#...##..##....
##..###..##...........#.#...#..
.....#......#..............#...
#..#.##.###.......#.......#...#
#........#....##......#.#......
.#.#.#...#.......#........#.##.
#..#..##.....#...#.#.#.#..###..
.#.#....#..#..#.#....##.#.#....
..#.#.........####.#...#.#.###.
....##........##....#........#.
................#..........#...
..#...................###.##..#
.........#..#..#.#...#....#.#.#
......#.....###.....#.#..#...#.
.#.#.....#..##............##...
...##......##.#....#...........
...##..##..###.#...##..........
....###...#..#.#......#......#.
....##..............#..#..#.#..
####.......#...##.##..#.#......
.#......#.....#....###..#....#.
.#.......#...##...#..##.#......
#.......#.......#.#....#.#.#..#
........#..#..#............##.#
#.#...#.#..##..#.......##..#...
...#....#...#..........##..#...
#.#...#.##....###......##....#.
#..#...###........#..#....#..#.
#....#....###....#..#.......#..
....#.#........#.............#.
.#.##........##...#...#...#...#
#.....##.....#.......#.#.#.....
.#.##..........##..#....#......
.#..##.##.#...##....#.#....##..
........#.#.##.#....#.#..#....#
..#...........................#
.#...........#....#....#.#..#..
........##...........#...#...#.
..#.....#..#......#..##.......#
..#....###..###...#.#.#..#....#
#..#.#...#......##......#......
...........#...##..##....##....
#.#......###..#.....#.......#.#
#.....#....#....#.#...#...#....
....#...#.......#....##.#..#...
.####..##......##.#........#..#
..###..#.#.....#...........##..
..##.#.#..#....#..#..#.........
..........#.#.#####...#........
.###......##.#....#........#...
.....#..#..#.#..#.........#....
..#....#...#...#...##..........
....#..##.#.........##.#..##...
##.####..#...#.#...#.....#..###
..#..#...#...#.....##....#..#.#
#..##..#.....#....#.#.....##..#
...#...........##.....#......#.
......#...#.....#.#..###.......
.........#.....###.##..#...#...
.#...#.##...#..........#.#..##.
......#.......##.....#.....##..
........###..........#...#.....
##.......###..###...##...#.....
#.#.............#..#..#.#......
..##........#.###.....#....##..
......#...#......#....##......#
..#.....#...##...#.......#..#..
..#.###..##.##...#....#...##.#.
........##...#..#.#..##.....#.#
.......................#......#
..##.###......#.#.............#
....#...........###............
##...##.....#.......##.......#.
...#..##..##..#.#.###..#......#
........#........#.#..#..#.....
.#......#....##..........#...#.
.##...........##....#..........
.#..#....###.......#....#..##..
.....###..........#....#.#.#...
...#....###.#.#......#......#..
#.#.##.#.....#..#........#...#.
...#.##.........#..#.....#.....
.##...##......##...###...#.....
...#.....#.##..#...#..#........
........#............#.#.#..##.
###...#.....#...#..#........##.
##...#..#.....#.#....#.#.#.....
#..##.......#...#.#...##..#....
#...#.##.....#.#..#.##......#.#
..#......#.#.#.##.##..........#
..#.##......#.#.#..##..........
....#..#....#..#..............#
..........###.....##..#........
...#.....##.....#..#.#..#...##.
.#..##.#..#....#.#......#.##...
...#.....#..#.#...#..#.....#.#.
#...#.#......##...#..#...#....#
..#.......##...#..#.......#...#
#.....#...........##.#.........
.#......##.....####...#.......#
........#..#.....#.......#..#..
....#.#...##..##...#..#....#...
#.#......#...#.#.###.....#.....
..##...#.#........#.##....#.#.#
.#....#......#.#...###.#.......
.......#.#...##....#.#....#....
.....##..##...#..#.#.....##..#.
.##..#.#.#....##.#...#.....#...
.#..#..##....#.##.......#...#..
....#.##...#..##......#.....#..
.#..#....##....#...............
..##...#.....###...............
..............#.#.##........#.#
.#.#....#....#...#.#........#..
.##...#...#.#....#....#.#.....#
#..............#......#.####.#.
......#...........#..#.....##..
#.#..##.##.....#......#..#.#..#
##.##..#.##.#.............#...#
...#..#......#....#............
........###.#.#..#...#.....#.##
..#.......#.##.........#..#....
...##.#........##...#.#.##..#..
...#..#......#...#....#........
...........#..#..#...##...#....
...#.....#....#..####..##.....#
.......#..#..#......#.........#
#......#........###.....##....#
..#..#..#.#.#....##...##......#
#.#..#..###.#..#.....####......
.#................#####....#...
.#.........#...#.......#......#
..#.......#######........#.....
..#........#.....#..#...#..#..#
.#..#.#..#....#.#..##...#..#.#.
..#...........#.#...#.#.##.....
...#.#.#....##.###....#...####.
.....#..#.....#..#.#.........#.
......##...#...###............#
..#.#......###..####..#......#.
###.##.#..#......##.#..##.....#
....###...##............#.#....
..#.....##...#...##....#...#...
#.....#.....#...#...#.#..#.....
####..........##.#.#..#.....##.
...#..........#...#...##..##.#.
..........#.........#.#..#..#..
#....###.....#.#...#.......##.#
#..#.##.....#..........#...#...
...#.#.###.......##..#.....#...
#...#.#..#.............#..#.#..
#........#.................#..#
..#.#....#.#..##.#...#..#....#.
#...#..........#...###....#...#
......#.............#....#....#
#.#.......##.......#.#....##..#
##...#....#.............#..#...
........#...###.##.#..###.#...#
...##...#..#..#...##..##......#
..#.......##....#.#.##....#....
.....#....#..#.#...##.#.#.....#)";

constexpr char input4[] = R"(hcl:5d90f0 cid:270 ecl:#66dc9c hgt:62cm byr:1945 pid:63201172 eyr:2026

ecl:amb byr:1943 iyr:2014 eyr:2028
pid:333051831

byr:1971
eyr:2021 iyr:2015 pid:158388040 hcl:#18171d ecl:brn hgt:179cm

byr:1936
pid:707057570 iyr:2014 ecl:amb cid:299 eyr:2030
hcl:#c0946f hgt:186cm

hgt:163cm iyr:2013 ecl:gry hcl:#86e981 byr:1939
eyr:2020 pid:241741372 cid:203

ecl:brn hcl:#341e13
pid:686617364 byr:1929 eyr:2029 hgt:160cm cid:280 iyr:2020

byr:2002 hcl:#623a2f
pid:253005469 iyr:2011 ecl:hzl hgt:184cm eyr:2027

ecl:#bb984b eyr:2040
hgt:188in
iyr:2005 hcl:c5be8e pid:174cm cid:161 byr:2004

ecl:oth iyr:2010 cid:128 hgt:153cm byr:1991
pid:24061445 eyr:2025 hcl:#54d43e

hcl:z
iyr:2023 pid:981178503 ecl:gmt eyr:2038 byr:2004

ecl:gry eyr:2022 iyr:1981 pid:566993828
byr:1941 hcl:#341e13 hgt:176cm

eyr:2027 byr:1976
pid:350079989 ecl:blu iyr:2013 hgt:180cm hcl:#866857

eyr:2029 hcl:#ceb3a1
ecl:lzr
iyr:2011 hgt:152cm byr:1986 pid:162999623
cid:240

ecl:gry iyr:2017 hcl:#18171d byr:1926
eyr:2027 hgt:68in
cid:310 pid:560836007

ecl:grn
cid:307
pid:#cdc803
byr:1975 eyr:2039 hgt:75cm
hcl:318b11 iyr:2022

ecl:brn hgt:179cm eyr:2020 iyr:2016
pid:322103252 byr:1940 hcl:#b6652a

hcl:#733820 hgt:188cm cid:70 eyr:2021 ecl:amb
byr:1996
iyr:2013 pid:412419084

hgt:164cm iyr:2011 byr:1928 eyr:2020 hcl:#733820 pid:704914380 ecl:blu

ecl:brn cid:267 eyr:2029 byr:2011
hcl:z pid:467662306 iyr:2026 hgt:104

pid:224593036 eyr:2027
ecl:brn hcl:#341e13 iyr:2014
byr:1997
hgt:181cm

eyr:2005 pid:9756449964
hcl:#fffffd byr:1999 ecl:dne hgt:152in iyr:2027

byr:1998
iyr:2017 pid:618350852 hgt:156cm cid:193 ecl:amb
hcl:#602927 eyr:2029

byr:2021 pid:3395281192
hcl:z hgt:167in ecl:grt eyr:2008 iyr:2025

cid:206 pid:735212085 eyr:2020 byr:1950 hgt:153cm
ecl:blu iyr:2019
hcl:#733820

eyr:2021 pid:551149968 iyr:2020 hcl:#6b5442
byr:1948
ecl:grn
hgt:152cm

hgt:76in cid:113 iyr:2019 eyr:2023 hcl:#888785 pid:131239468 ecl:grn
byr:1994

ecl:oth cid:240 hcl:#bed757 byr:2027 eyr:2021 pid:#ffa971 iyr:2022

cid:204 iyr:2011
ecl:blu hgt:169cm byr:1985 eyr:2020 hcl:#18171d

ecl:hzl iyr:2012 cid:344 hcl:#7d3b0c
hgt:190cm pid:599490023 byr:1954 eyr:2023

cid:333
eyr:1971 hgt:193cm
ecl:#12421d hcl:#7d3b0c iyr:1991 pid:#7149ad byr:2008

iyr:2014
hgt:151cm pid:190259199 eyr:2021 ecl:blu
byr:1975 hcl:#ceb3a1

hgt:164cm ecl:oth hcl:#c0946f pid:427760590 eyr:2023 iyr:2012
byr:1979

hgt:193cm iyr:2023 ecl:#213711 hcl:z
pid:23861701
byr:2020
eyr:1924

pid:450691994 cid:191
eyr:2028
byr:1972 ecl:oth hgt:168cm hcl:#888785

iyr:2013 hcl:#18171d hgt:170cm ecl:blu
pid:040253250 eyr:2024
byr:1954 cid:340

cid:185 byr:1956 eyr:2029 pid:454637740 ecl:hzl hcl:#efcc98 iyr:2019 hgt:73in

hcl:#efcc98
hgt:176cm
ecl:hzl cid:113 pid:747653564 iyr:2016
eyr:2020 byr:1945

hgt:69in cid:264 byr:1971 hcl:#733820 ecl:amb pid:086130104
iyr:2011
eyr:2022

iyr:2010
eyr:2034
pid:501068596
hgt:109 hcl:z byr:2018 cid:326 ecl:lzr

pid:955229652
eyr:2027 cid:175
byr:1950 iyr:2010 ecl:gry hcl:#866857 hgt:177cm

ecl:amb hcl:#888785 eyr:2020
hgt:172cm byr:1991
pid:556956304

byr:1930
eyr:2011
pid:734176827
ecl:brn hgt:182cm
hcl:z

hcl:#a97842
pid:040278061 ecl:brn hgt:168cm cid:194
byr:1973
iyr:2016 eyr:2027

hcl:#623a2f
eyr:2023
ecl:blu iyr:2016 pid:844348663 byr:1997 hgt:179cm

hgt:188cm hcl:#a97842 byr:1972
ecl:hzl pid:912948357 eyr:2026 iyr:2025

iyr:2011 eyr:2025
cid:286
pid:084736292
byr:1936
ecl:oth hcl:#a97842 hgt:166cm

iyr:2012 ecl:blu hgt:159cm byr:1980 eyr:2024 pid:811644928 cid:105 hcl:#7d3b0c

pid:530452683 hcl:#341e13
iyr:2011
hgt:163cm ecl:oth
cid:309 byr:1940

ecl:hzl
pid:144377866
hcl:#18171d hgt:193cm
iyr:2013 eyr:2028

pid:868386570
ecl:brn
hgt:161cm hcl:#18171d
byr:1956
iyr:2017
cid:307

iyr:2019 eyr:2026 ecl:brn
hcl:#866857 byr:1993 cid:299
pid:603503348 hgt:186cm

iyr:2014
pid:852954158 hgt:73in byr:2021
eyr:2020 hcl:#a97842 cid:260 ecl:oth

hgt:164cm eyr:2025 pid:113005290 byr:1955 ecl:blu iyr:2017 hcl:#b6652a

cid:179 iyr:2015
pid:317467924 eyr:2025 ecl:gry byr:1996 hgt:180cm hcl:#a55f97

hgt:172cm hcl:#efcc98 cid:53 ecl:grn iyr:2016
byr:1991 pid:337133478
eyr:2025

hgt:150 iyr:2008
pid:#3e66a7 ecl:#8b3133 eyr:2040 byr:2012 hcl:802d16

pid:577607614 byr:1924 hgt:173cm hcl:#341e13 eyr:2026 ecl:amb
iyr:2013

eyr:2020 iyr:2011 hgt:175cm hcl:316607 pid:738554684
byr:2029 ecl:dne

hgt:179cm iyr:2016
pid:178cm byr:2015
ecl:gry
hcl:#341e13
eyr:1986

byr:2005 iyr:2028 ecl:#7be9b8 eyr:1941 pid:#e7e9cb hgt:177in cid:67 hcl:#602927

ecl:#0d50e6
pid:192cm iyr:2014 eyr:2027 hgt:73cm cid:162 hcl:93ea2f
byr:1958

hcl:z
cid:292 hgt:184in eyr:2001 pid:7218132701 byr:2020
ecl:grt iyr:2014

ecl:gry
hcl:#fffffd
eyr:2026 iyr:2013
pid:117261833

pid:780384540 ecl:gry cid:52 eyr:2020 hgt:193cm hcl:#4ae223 iyr:2017
byr:1984

ecl:hzl
pid:218314886 eyr:2030 byr:1948 hcl:#c0946f hgt:185cm iyr:2013

pid:175cm cid:340 ecl:blu hcl:#cfa07d eyr:2036 iyr:2018 byr:2018 hgt:70cm

byr:1953 hgt:164cm ecl:hzl
pid:488831953 iyr:2010
hcl:#fffffd

byr:1961 hgt:165cm pid:506597451
cid:122 eyr:2020 hcl:#cfa07d ecl:gry
iyr:2016

iyr:1970
eyr:2040
byr:2008
hgt:188
ecl:#b00a46 hcl:#fffffd

hgt:179cm
byr:1972 eyr:2026
cid:62 ecl:oth
pid:996355557 iyr:2013 hcl:#a97842

ecl:amb eyr:2026 byr:1936 pid:812982189 hgt:158cm hcl:#888785 iyr:2010

iyr:2020
hcl:#7d3b0c hgt:160cm
pid:336806720
eyr:2024 ecl:#7e0ae0 byr:1992

eyr:2036 pid:178cm hcl:z
hgt:133 byr:2009 ecl:dne cid:127

byr:1938 hcl:#fd309a
cid:104 iyr:2015 eyr:2022 pid:201047563
hgt:160cm ecl:hzl

byr:2023 pid:25086180 hgt:160cm cid:180 hcl:z ecl:grt eyr:2038 iyr:2022

ecl:grn hgt:167cm
byr:2023 iyr:2026 eyr:1928 hcl:z

hcl:#efcc98 hgt:187cm byr:1925
ecl:grn
pid:753746076 iyr:2017
eyr:2021

iyr:2017
byr:1934 ecl:grn eyr:2021 hgt:163cm
pid:688172460 hcl:#b6652a

hcl:#c0946f iyr:2018 ecl:blu pid:676564085
hgt:184cm cid:152 byr:1980 eyr:2023

ecl:grt hgt:70cm iyr:2022 hcl:58716b byr:2010
pid:60834390 eyr:2037

iyr:2028 pid:270499403
ecl:xry eyr:1947 hgt:152cm byr:2025

pid:091281559 hcl:#733820
hgt:166cm
eyr:2021 ecl:grn cid:327 byr:1928
iyr:2014

eyr:2025 ecl:grn byr:1938 hcl:#ceb3a1
cid:234
pid:549433891
hgt:172cm iyr:2016

hcl:#c0946f hgt:173cm iyr:2014 eyr:2030 ecl:blu byr:1965
pid:696577272

hgt:154cm eyr:2030
pid:475642195 byr:1920 iyr:2013 hcl:#866857 ecl:blu

pid:518398763 iyr:2010
eyr:2020
hgt:183cm
ecl:brn byr:1921 hcl:#18171d

eyr:2023 pid:614116723 hcl:#7d3b0c ecl:hzl
iyr:2016 hgt:189cm byr:2000

ecl:oth hgt:178cm hcl:#733820 byr:2001 pid:862420089 eyr:2023

pid:851985534 eyr:2028 hcl:#18171d ecl:oth cid:238 byr:2001
iyr:2019 hgt:166cm

byr:1927
hgt:170cm
pid:246933107
ecl:amb iyr:2015
cid:166 eyr:2027 hcl:#b6652a

byr:1929
hcl:#7d3b0c
cid:263 pid:317156081 hgt:165cm eyr:2031 iyr:1980

hcl:#866857 eyr:2021 hgt:179cm pid:206504353 cid:84 ecl:gry iyr:2012 byr:1952

byr:1986 ecl:hzl
hcl:#a97842
iyr:2015 hgt:152cm pid:722601936 eyr:2025

byr:1921
pid:563550743 iyr:2015 ecl:hzl
eyr:2026 hcl:#fffd7b

ecl:hzl
hcl:#888785 cid:268 byr:1926 hgt:176cm pid:321394231 eyr:2021 iyr:2014

eyr:2021 cid:225
pid:770796086
ecl:gry byr:1961
hgt:154cm
hcl:#6b5442
iyr:2011

eyr:2028 iyr:1961 byr:2016
cid:98 pid:587360691 hgt:70cm ecl:#ceaf1f
hcl:#c0b6db

byr:1978
eyr:2022 hgt:184cm hcl:#7d3b0c
cid:271
ecl:amb pid:235352975
iyr:2010

eyr:2026 pid:2844744
iyr:1958 byr:2017 hcl:z
hgt:192in
ecl:#971530

iyr:2020
byr:1960 eyr:2028 cid:162 pid:491912610 hcl:#fffffd hgt:59in

iyr:2012 pid:365229485 ecl:amb byr:1933 hcl:#18171d eyr:2024

hgt:193cm pid:473100400
hcl:#efcc98
cid:201 eyr:2020 byr:1969 ecl:gry iyr:2016

eyr:2025 pid:137807160 iyr:2014
ecl:grn byr:1944 hgt:168cm hcl:#ceb3a1

byr:2008 ecl:xry
iyr:2012 hcl:#efcc98 eyr:2028 pid:272344138

eyr:2024 pid:959415175 cid:148 hcl:#efcc98
byr:1977 hgt:179cm ecl:amb

pid:253742161 ecl:hzl hcl:#602927
eyr:2021 hgt:191cm byr:1925 iyr:2010

ecl:amb hcl:#341e13
eyr:2024 iyr:2017
byr:1975
pid:838040028 hgt:172cm

hgt:172in
pid:311113967 iyr:2015 cid:111 eyr:2023 ecl:oth byr:2003 hcl:#866857

hcl:#888785 byr:1978 hgt:64in pid:442064310 eyr:2021
iyr:2011 ecl:hzl

eyr:2021 byr:1988 hcl:#a97842
pid:290578586 ecl:hzl hgt:174cm iyr:2020

byr:1998 iyr:2020 hgt:163cm ecl:oth eyr:2025
hcl:#6b5442 pid:913461954

hgt:173cm hcl:#18171d
eyr:2029 ecl:brn cid:313 byr:1980
iyr:2011 pid:810497375

byr:1975 hgt:153cm eyr:2027 hcl:#fffffd pid:857730031
ecl:gry iyr:2020

hcl:#18171d ecl:hzl
pid:185778821 hgt:178 iyr:2014 eyr:2028 byr:1974

iyr:2015 hgt:163in hcl:#c0946f ecl:#4844a6 byr:1979 pid:124626004

eyr:2024
pid:737015681 byr:1952
ecl:hzl iyr:2019
hgt:192cm hcl:#cfa07d

pid:2986469633 byr:2025 hgt:66cm hcl:z eyr:2011 iyr:2027 cid:311

byr:1962
eyr:2032
ecl:lzr iyr:2014
hgt:70cm pid:94309916
hcl:#fffffd

cid:350 hcl:#602927 iyr:2019 hgt:178cm
pid:172238204 byr:1949 ecl:hzl
eyr:2028

hgt:153cm
hcl:#ceb3a1
ecl:grn
byr:1997
pid:266747822
iyr:2011 eyr:2022

pid:839681159 hgt:150cm eyr:2024 hcl:4d6414
ecl:blu
iyr:2018 byr:1988

byr:1930 iyr:2011 pid:352711700 hgt:174cm cid:67 eyr:2020 ecl:hzl hcl:#6b5442

byr:1949 iyr:2013 hcl:#623a2f eyr:2030
hgt:176cm

hgt:164cm eyr:2026 hcl:#866857
iyr:2018 pid:922679610 byr:1974
ecl:brn
cid:114

eyr:2038 cid:317
hgt:166in pid:0384056779 byr:2013 iyr:2021
ecl:xry

cid:83 hgt:166cm eyr:2026 iyr:2018 byr:1994 ecl:brn pid:858360477 hcl:#ceb3a1

hgt:169cm eyr:2020
pid:110129489 byr:1958
ecl:oth hcl:#7d3b0c
iyr:2011

cid:279
iyr:2019 byr:1995 eyr:2026 ecl:hzl
hcl:#7d3b0c hgt:185cm pid:085427066

hcl:#c0946f
iyr:2011 eyr:2027
ecl:amb
byr:1943 pid:060674566 hgt:183in

hgt:156cm hcl:#c0946f pid:242827141
cid:152
iyr:2018
eyr:2025 byr:1963

byr:1925 cid:168 eyr:2020 hcl:#cfa07d iyr:2011 ecl:brn hgt:150cm pid:740118192

ecl:oth byr:1951 eyr:2025 cid:213
iyr:2020
hgt:154cm

eyr:2025 iyr:2018 ecl:grn cid:91 byr:1925
hgt:164cm hcl:#18171d

byr:1997
iyr:2018 eyr:2023 hcl:#602927 pid:251296833 ecl:blu
hgt:185cm

hgt:168cm pid:556895048
hcl:#341e13 ecl:oth eyr:2020 cid:64 byr:1940

byr:1996 pid:821204904 cid:250 ecl:amb eyr:2026 hgt:185cm iyr:2019

ecl:grn hcl:#b6652a iyr:2013
eyr:2028 hgt:157cm
byr:1925 pid:158cm

hgt:190cm iyr:2019 ecl:oth eyr:2028 hcl:#341e13 cid:334 pid:258135663 byr:1972

byr:1936 hgt:76in pid:748344702 cid:335
eyr:2027 hcl:#a97842 ecl:amb iyr:2015

hcl:z hgt:66cm eyr:2029
pid:#1589e0 iyr:2019 ecl:hzl

hcl:#733820 ecl:amb
iyr:2013
hgt:188cm byr:1955 pid:125663066 eyr:2020 cid:179

iyr:2017
hgt:185cm ecl:grn
cid:298 eyr:2030 hcl:#5b1c03
byr:1992 pid:092887457

eyr:2032 ecl:grn hgt:82 iyr:2022
pid:180cm byr:2003
cid:55 hcl:z

pid:257666411 eyr:2023 byr:1982 hgt:179cm hcl:#18171d ecl:brn iyr:2010

iyr:2020
ecl:amb hcl:#18171d
pid:971402454 eyr:2028

hcl:#efcc98 byr:1964 pid:577424639 eyr:2030 iyr:2010 ecl:brn hgt:169cm
cid:285

ecl:amb byr:1958 hgt:159cm hcl:#efcc98 eyr:2024 iyr:2016
pid:029502840

hcl:ac11eb
byr:2007 pid:0489471320 hgt:69cm iyr:2030 ecl:blu eyr:2033

pid:3785138563 eyr:2020 iyr:2020
hcl:#966583 byr:2008 hgt:186cm ecl:gry

iyr:2014 pid:868785127 eyr:2029
cid:220 hcl:#18171d ecl:blu byr:1948 hgt:171cm

byr:1936
pid:433437105
hcl:#c0946f eyr:2020 iyr:2019 hgt:160cm ecl:brn

iyr:2015 eyr:2024 hgt:176cm ecl:hzl
byr:1995 pid:101835436 hcl:#ceb3a1

eyr:1959
hcl:#cfa07d iyr:2010 pid:9214728
ecl:#42fda0 hgt:71 byr:2022

byr:1998 iyr:2011 cid:275 ecl:oth
pid:924517068 eyr:2024 hgt:191cm
hcl:#623a2f

hgt:157 hcl:z
byr:1923 pid:#f6ce52 iyr:1975 ecl:lzr cid:100

pid:565022102
eyr:2021 hcl:#efcc98
byr:1988 ecl:gry iyr:2012

hgt:156cm
hcl:#b6652a eyr:2021 pid:969724332
cid:126 iyr:2016
ecl:hzl byr:1988

ecl:blu hcl:#866857 hgt:153cm
pid:798083560
iyr:2015
byr:1981 eyr:2030

iyr:2013 cid:103 hcl:#efcc98 eyr:2022 byr:1964 ecl:gry
hgt:161cm pid:950689613

pid:4316019547
ecl:gmt
eyr:2029 byr:2011 iyr:2005 hgt:170cm cid:135
hcl:567fd8

hcl:#6b5442 pid:843348901 byr:1960
hgt:156cm
eyr:2028 ecl:amb

eyr:2027
pid:286247733 byr:2000 hgt:191cm
iyr:2014
hcl:#341e13 ecl:amb

ecl:gmt byr:2005 hgt:182cm pid:376332625 hcl:z iyr:2021
eyr:1949

hgt:184cm
byr:1940
cid:260 eyr:2030 ecl:brn
iyr:2011 pid:792881807

iyr:1936 eyr:2021 cid:133 hcl:#623a2f byr:2003 pid:197167496
ecl:#8896de

hgt:67in cid:110
byr:1951
pid:389358116 eyr:2028 iyr:2017
ecl:grn

hgt:161cm
cid:215
pid:116325531 iyr:2019
eyr:2025 hcl:#18171d ecl:blu
byr:1951

pid:787859682 hcl:#a97842 eyr:2020 byr:1948 hgt:190cm ecl:brn iyr:2020

pid:034440951 hgt:73cm hcl:803e55
cid:350 byr:1985
ecl:#a18487 eyr:2031
iyr:1973

hcl:#40ee86 ecl:brn
iyr:2016 byr:1922 hgt:150cm pid:449374426

eyr:2040 hcl:260be4 pid:208681353 byr:2029 ecl:gry
hgt:178cm

hcl:#18171d hgt:162cm byr:1983 eyr:2020 pid:328556776 iyr:2017 ecl:grn

eyr:2029
hcl:#a97842
pid:#7bd019 iyr:2015
hgt:168cm byr:1926
ecl:grn

ecl:grt eyr:2034 pid:640680934 hgt:189in cid:276 byr:1969 hcl:511eed iyr:2023

eyr:2039 hgt:182in cid:145
hcl:4a259b iyr:2026
byr:2004
ecl:xry pid:#a3c9ea

hcl:#866857
pid:615665716 ecl:blu hgt:164cm iyr:2020
byr:1948 eyr:2024 cid:286

hcl:#b6652a hgt:59in eyr:2027
pid:752461325 ecl:oth
byr:1932 iyr:2019

eyr:2030 byr:1936 ecl:hzl
iyr:2010 cid:263 pid:186570962 hcl:#888785
hgt:163cm

byr:1949 ecl:blu
pid:407719342
eyr:2030
hcl:#b6652a iyr:2012
hgt:186cm

pid:154cm ecl:amb byr:1944
eyr:2022
hcl:z iyr:2017

byr:1980 hcl:#d2c954 iyr:2013 ecl:brn hgt:72in
eyr:2030
pid:017095362

hgt:179cm
hcl:#ceb3a1 cid:61 eyr:2026
iyr:2011
pid:897403026 byr:1984
ecl:amb

cid:150 hgt:181cm
eyr:2028 pid:894689339
hcl:#602927 byr:1933 ecl:grn iyr:2018

pid:125553946 byr:1942 eyr:2026 hgt:193cm
iyr:2010 ecl:gry
hcl:z

eyr:2013 pid:1213613355
ecl:#b08dca hgt:190in
hcl:06adb3 cid:303 iyr:2010

iyr:2019 pid:255938897
eyr:2022 hgt:152cm
byr:1956 ecl:grn hcl:#ceb3a1

eyr:2029
pid:670713784
iyr:2020 ecl:grn
hgt:155cm hcl:#6b5442 byr:2002

byr:1925 hcl:#866857 pid:323449427 ecl:oth
eyr:2023 hgt:163cm iyr:2014

pid:841608722 byr:1955 hgt:150cm ecl:blu eyr:2029
hcl:#6b5442

eyr:2023 hcl:#efcc98
hgt:164cm ecl:gry
iyr:2018
byr:1993 pid:501920795

eyr:2030
iyr:2019 hgt:73in hcl:#bf908a
byr:1961 ecl:blu cid:86 pid:436811356

pid:#02516a hgt:131 iyr:1969 ecl:grt byr:2015
eyr:2010 hcl:z

ecl:#25fb6c cid:239 pid:167cm iyr:2021
byr:2023 hgt:75cm
hcl:z eyr:1931

pid:279251948
ecl:oth hcl:#6b5442
byr:1943 iyr:2015 hgt:173cm eyr:2039

byr:1935
iyr:2013 hgt:151cm hcl:#b6652a
ecl:grn
eyr:2023 pid:741958450

hcl:6beab7 byr:1986
hgt:85
iyr:2012 pid:#d98df3 eyr:2035
ecl:dne

byr:1929
pid:764478810 ecl:grn
hcl:#866857 iyr:2019 hgt:155cm eyr:2022 cid:277

hgt:155cm pid:450816410 eyr:2030 cid:165 byr:1969 ecl:blu hcl:#866857 iyr:2019

cid:330 pid:168777528 eyr:2024 ecl:blu hcl:#341e13
hgt:178cm iyr:2013
byr:1921

eyr:2037 iyr:1973 hcl:a4ebf3
pid:161cm
ecl:oth hgt:64cm cid:62

cid:235
hcl:538f8a hgt:70cm
iyr:1970 pid:177837127
ecl:#95700d byr:2003

ecl:hzl pid:375018246 hgt:161cm
iyr:2011 eyr:2029 hcl:#c0946f
byr:1956

hcl:#888785
iyr:2016
pid:161cm byr:1977 ecl:#0188d8 eyr:2029
cid:104 hgt:63in

byr:1979 eyr:2020 hcl:#ceb3a1 ecl:amb pid:752141341 hgt:150cm iyr:2010

cid:274 byr:1928 iyr:2018 eyr:2023 hcl:#a97842 hgt:173cm pid:186060112 ecl:gry

hcl:#341e13
ecl:blu iyr:2011
hgt:190cm cid:292 pid:974271891 eyr:2020 byr:1927

hcl:#fffffd eyr:2025
ecl:brn byr:1923 iyr:2011
pid:037981552

ecl:blu pid:412817852 hgt:150cm iyr:2026
byr:2026
eyr:2020

ecl:brn byr:1988 eyr:2026
hgt:178cm pid:008152501
hcl:#602927
iyr:2020

ecl:brn pid:877401308 byr:1923 cid:154
hgt:170cm
hcl:#fffffd
iyr:2014
eyr:2022

cid:56 hcl:ee020e pid:590581021 iyr:2018 hgt:72cm byr:2007
eyr:1964 ecl:oth

eyr:2029
iyr:2012 ecl:oth
hgt:185cm cid:235
byr:2002
pid:064901580

byr:1956 hcl:#6c1a8c pid:497814257
eyr:1964 hgt:155cm ecl:gmt iyr:2030

byr:1935 hgt:171cm cid:253 pid:033393224 hcl:#c0946f iyr:2012
ecl:blu eyr:2025

byr:1977 hcl:#602927 cid:175 iyr:2010
pid:9391986394 hgt:65in eyr:2026
ecl:amb

iyr:2011 hgt:158cm ecl:#31cae1 byr:1958 hcl:b94ad1
eyr:2023 pid:#400a21

hcl:e205b0 pid:84195182 byr:2012 eyr:2037 ecl:zzz hgt:75cm iyr:2030

pid:102379515
byr:1971
hgt:169cm
ecl:amb
eyr:2020 hcl:#cfa07d iyr:2017

pid:236611157
eyr:2020 hcl:#b6652a
iyr:2017 cid:194 byr:2001 hgt:169cm ecl:gry

iyr:2012 hcl:a256b5 eyr:2040 cid:62 hgt:177in byr:2010

eyr:2028 byr:2009 iyr:2020 ecl:brn
pid:12371575 hcl:#866857 hgt:190cm

byr:1965 eyr:2028
pid:402013776 hcl:#bc4e9e cid:183 hgt:150cm iyr:2015

pid:0269051559
byr:1936 hcl:z ecl:#ff0ab9
iyr:2014 eyr:2031
cid:346 hgt:153in

hcl:#18171d iyr:1929 hgt:157cm
eyr:2036 byr:1970
ecl:amb

hcl:#733820
eyr:2022
pid:096076686
iyr:2010
hgt:192cm
byr:1957

hcl:#ceb3a1 ecl:brn iyr:2013
eyr:2025
byr:1953 pid:751516675
hgt:175cm

byr:1928
eyr:2027
cid:85
hgt:179cm ecl:oth
pid:169307999 hcl:#3e07af iyr:2010

hgt:60cm byr:2008 hcl:z
eyr:1965 pid:167cm
cid:106
iyr:1930

hcl:#1099d9 ecl:amb pid:638820661 iyr:2014
byr:1998 eyr:2025
hgt:162cm

ecl:amb
eyr:2022 hcl:#623a2f byr:1956
hgt:154cm
iyr:2010 pid:717452826

hcl:fc9ba5
iyr:1928
eyr:2029 pid:54503219
byr:2020
ecl:#d2155a hgt:124

eyr:2027
hcl:#7d3b0c hgt:178 ecl:#63b8e6 iyr:2015 byr:1954

ecl:oth byr:1970
pid:833178609 hcl:#c0946f iyr:2016 cid:81 eyr:1976
hgt:69in

hcl:#0cf4b8 pid:499271062 hgt:62in ecl:hzl iyr:2016 byr:1922
eyr:2022

byr:1994
eyr:2029 hgt:174cm hcl:#efcc98
ecl:amb
iyr:2019 pid:297210449

ecl:hzl
eyr:2026 iyr:2017 hcl:#a97842 hgt:162cm
byr:1950

pid:091886000 hgt:179cm byr:1975 eyr:2020 cid:326
ecl:oth
iyr:2015 hcl:#a97842

hcl:#efcc98 hgt:176cm byr:1940 iyr:2016 ecl:brn pid:514758507 eyr:2024 cid:313

eyr:2026 byr:1980
hgt:155cm
iyr:2013 pid:367909831 ecl:oth

byr:1965
eyr:2021 iyr:2017
hgt:185cm
hcl:#a97842 ecl:hzl pid:238901177

hgt:156cm pid:916654189
byr:1943 eyr:2022 ecl:amb hcl:#341e13 iyr:2016

cid:305 iyr:2013
eyr:2029 hgt:163cm ecl:blu
hcl:#fffffd pid:944033881
byr:1952

pid:638190538
hcl:#866857 ecl:brn
eyr:2030 iyr:2016 cid:78 byr:1943 hgt:186cm

eyr:2024 iyr:2015
pid:231006970
cid:312 byr:2000 hcl:#623a2f hgt:190cm ecl:brn

ecl:#f89e87
hcl:#fffffd hgt:166 cid:215
iyr:1961
eyr:2027 pid:314310197 byr:1977

hcl:z eyr:1995 pid:951911095 hgt:154cm
ecl:xry
cid:154 byr:2023

hgt:66in hcl:#866857
ecl:brn
pid:328148585 byr:1984 eyr:2024

pid:456453839
eyr:2024 hcl:#fffffd byr:1990 ecl:amb

eyr:2030 cid:149 pid:983735096 hgt:179cm iyr:2014 byr:1957 ecl:gry hcl:#341e13

byr:2001 hgt:157cm
ecl:hzl eyr:2021
hcl:#ceb3a1
pid:558527031 iyr:2018

hgt:122 ecl:oth hcl:z
pid:384664729
iyr:2012 cid:298 eyr:2023

ecl:utc eyr:2024
hgt:162in iyr:2018 pid:1722490341 byr:2027
hcl:#18171d

ecl:gry iyr:2017 hcl:#602927 cid:303 byr:1950
pid:509264482 eyr:2030
hgt:164cm

hgt:192cm pid:967128169 iyr:2019 ecl:blu eyr:2024 hcl:#fffffd byr:1949 cid:301

ecl:blu
cid:71 hgt:164cm eyr:2022 hcl:#cfa07d pid:750303088
byr:1949 iyr:2014

iyr:2014
pid:401425898 byr:1981
hcl:#7d3b0c hgt:167cm eyr:2028

hcl:#602927 hgt:160cm iyr:2014
eyr:2023 byr:1940 pid:748539736 ecl:amb

eyr:2025
hcl:#c0946f pid:325296854 iyr:2020
hgt:76cm ecl:amb byr:1921

hgt:190cm
iyr:2011 pid:082777116
byr:1979 cid:73 ecl:oth hcl:#6b5442 eyr:2021

eyr:2029 ecl:amb hgt:151cm pid:144881592 byr:1964 hcl:#efcc98 iyr:2012

hcl:#efcc98
iyr:2019
eyr:2023 byr:1999 pid:645291123
ecl:brn

eyr:2029 pid:922956941 hcl:#623a2f byr:1934
ecl:grn hgt:151cm
iyr:2019

byr:1992 ecl:brn
hcl:#a97842
pid:269079906 hgt:187cm
iyr:2016 cid:218

byr:1951 ecl:oth eyr:2026 hgt:185cm
cid:82 hcl:#7d3b0c
iyr:2020 pid:052476816

eyr:2026
cid:319 iyr:2020
ecl:brn hcl:#888785
hgt:172cm pid:327064207 byr:1956

hgt:178cm
pid:638854420 byr:1995 eyr:2030 ecl:gry hcl:#7d3b0c iyr:2018

iyr:2026 hcl:#b6652a
byr:1946
hgt:186in pid:622875187 eyr:2028 ecl:gry cid:140

byr:1931 ecl:oth eyr:2030
pid:437813485
hgt:181cm
hcl:#efcc98 iyr:2018

byr:1999
ecl:amb
hgt:160cm iyr:2013 hcl:#b6652a pid:043039693
eyr:2022

byr:2025
pid:#fd7ad7 eyr:2025 hgt:63in
ecl:oth iyr:2010 hcl:#b6652a

ecl:grn
byr:1939 eyr:2025 hgt:171cm cid:134 iyr:2020 pid:090346629
hcl:#cfa07d

hcl:z
eyr:2031 cid:74
pid:50216290 ecl:utc iyr:2030
hgt:176in

byr:1971 ecl:brn hgt:190cm pid:791682756 hcl:#fffffd
iyr:2020 eyr:2027

iyr:1931 byr:2025 hgt:76cm pid:735796617 eyr:2040 ecl:utc hcl:#c0946f

hgt:163cm
hcl:#18171d
ecl:hzl
pid:628854394 cid:311 iyr:2020 eyr:2027

hcl:z
ecl:amb pid:#a8f973 hgt:94
eyr:2027 byr:2020 iyr:2012 cid:202

pid:086190379 byr:1931 ecl:blu iyr:2010 eyr:2027 hgt:175cm

ecl:#0dafcd byr:2025 iyr:2021 eyr:1970 hgt:63cm cid:260 hcl:75300a pid:208921120

pid:024722981 iyr:2011 hgt:193cm hcl:#efcc98 ecl:blu byr:2001

byr:2027
cid:123
ecl:xry hgt:183cm iyr:2019 eyr:2026
hcl:#c0946f
pid:380513483

eyr:2028 pid:302044900 iyr:2011 byr:1938 hgt:190cm ecl:amb hcl:#c0946f

eyr:2024 pid:672033747 byr:1931
iyr:2020 hcl:#f01aed ecl:brn

hgt:184cm hcl:#efcc98 pid:391597648
iyr:2020 ecl:gry
byr:1961

iyr:2013 hgt:191cm byr:1935 eyr:2028 hcl:#ceb3a1 cid:195 ecl:brn

eyr:2025 pid:322775528 hgt:155cm hcl:#efcc98 iyr:2015 byr:1996 ecl:oth

byr:1960
hgt:183cm pid:764315947 eyr:2030
hcl:#ceb3a1 ecl:brn

eyr:2029 hgt:168cm byr:1929 pid:800222003 ecl:gry hcl:#8f8aaa
iyr:2011

hcl:#623a2f ecl:hzl hgt:168cm pid:795434985 eyr:2020 iyr:2020 cid:209
byr:1970

cid:325
byr:2007 eyr:1933 hgt:188in
pid:713080083 ecl:#d624ca iyr:2030 hcl:z

hcl:#7d3b0c pid:431742871
ecl:hzl hgt:169cm cid:340
eyr:2023
iyr:2017 byr:1994

)";

constexpr char input5[] = R"(FBBFFBBLLL
FFBFFFBRLL
FFBBBBFRRL
FBFBBBBRLL
BFBBBBFLLR
FFFBBBBLRR
BFFFFFBLLL
BBFFFBFRRL
FFBFFFFLLR
BFFFBBBRRL
FBFBFFFLRL
FFFBBFBLRR
FBFBFBFLRR
FBBBBFBRRL
BFFBFFBRRR
FBBBFBBRLL
FBFFBFBRLR
BBFBFFFLRL
FFBFFFFRLR
FFBBFBFRRR
BFBBBFBLRR
FFBBFFFLRL
FBBBBFFRLR
FBBBBBBRLR
FFBFBFBLLL
BBFBFBBLLL
FFFFFBBRRL
FBFFBFBRRR
FFFBFFFRLL
BFBFBFFLLL
BFBFFBFLLL
FFFFBFFRRL
FBFFFFFRLR
FBBFFBBLLR
BFFFFFBLRL
BFBFFFBLLR
FBBBBBBLLL
BBFBFBFLLL
FFBFFBFLRR
BBFFFBBRLL
FFBFFFFLLL
FBBFFBFLLL
FFFBBBFRRR
BFBBFBFRLL
FBBFBFFRRL
FBFBBFBLRR
FFBBBBBRLR
FFBFBFFLLL
FBFFFBFRRL
BFFBBFFRLL
BFFBBFFLLR
BBFFBFFRRL
FBFBFBFLLR
BBFFBFBLRL
BFBFBFBLRR
FFBBFBBRRL
BFBBBFBRLR
FBFFFFBLLR
BFBFFBBLRR
BBFBFBFRRR
FFBFBBBRRL
BFBFBBFRLR
FBFBBBBRLR
BFFFFBBRRR
BBFFFBFLLR
FBFFFFBRRL
BBFFBFBLLL
BFFFBBBLLL
FFBFFFBLRR
BFBFBBBRRR
FBFFBFFRRR
BFFBFFBLLL
BFBBFFFLRL
BBFBFFBRLR
FBBFFFFLLL
FBFFFFBLLL
BBFFFFBRLR
BBFBFFBRRL
FBBFBFBRRR
FBFFBFFLRR
FFBBBFBLLR
FFFFFBFRRR
BFBBBBBLLR
BBFBFFFRLL
BFFBFBBLRR
BFFBBFBRLL
FBFFBFFRLR
FBFBBFFLLR
FFFFFBFRRL
FFBFFBFRLR
FBFBBBFLLL
FFBFBBFLLR
FBFFBBBRLR
FFFBFBFLLR
BFBBFBBLRL
BFFFFBFLLL
BFBFFBFLRL
BBFFBFBLLR
BFFFBFBRRL
BBFBFFBLLR
FFBBFFFRLL
FFFFFBBRLR
FFBFBFBRLL
FBBBBFBLRR
FFFBFFFRRL
FFFFBFFLRL
FFFFBFFRLR
BFFFFFFRRR
BBFFBFBRRL
BBFBFFFLRR
FFBBBFFLLR
FBFBFBBRLR
FBBFBBBLRR
BFFBBBFRLL
BFBBFBBLLL
FBFFFBBLLR
FBBBBFFRRL
BFBBFFFLLR
BFBBBFFLRL
FFBFFBBRLL
FBFBFFBRRR
FBBFBBBLRL
BFFFBFFLRL
BFFBFFBLRR
BFBFBBFLRL
FBFBBFFRLL
BFFFFBBRRL
FFBBBBBLRL
FBBFFBFRRL
BBFFBFBRLL
FBFFFFFLRL
FFFBFBFRLR
FFBBBBFLLR
FFFBBBFRLR
FFBBFFBRRR
FFFBFFBLRL
FBFBFBBLLL
BFFFFBBLRR
BBFFBBFLLR
FFFFFFBRLL
FBBBBBBLRR
FFFFBFBLLR
BBFFBBFRRL
BFBBBBBLRR
BFBBFBBLRR
BBFFFFBRRR
BFBBBFBLLR
BBFFBBBRRR
FBBFBFBRLL
FFFFFBBLRR
BBFBFBBLLR
FBFFFBFRLR
BBFFBFFLLR
BBFBFFFRLR
FFFFBFBLRL
FFBBBBBLRR
FBBBFFBLRR
FBBFBBFRLL
FBBFBFBRLR
FFBFBBBLRL
FBFFBBBLLL
FFFBBBBRRR
FFBFFBFLRL
BFFFBBFRLL
BFFFFBBLLR
BFFFFFBRRL
BFFBFBBRRL
FFBFFFBRRL
BFFBFFFLRL
BFFBBBFLLL
FFBBFFFLRR
FBBBFFBRLL
FFBBFFFRLR
BFBFBFFRLL
FFFFBBFRRR
BFBFBBFRRL
FBFBBBFLRL
FFFBFBBRLL
FFBBBFFLLL
BBFFFBBLRL
FBBBFFBRRR
BFBFBFBLLL
FFBFFBBRLR
FFBFBBBRLR
FFFFFFBRLR
BFFBBFFLRL
FFBFFBFRRR
FFBFBFFRLL
FBFBFFBLLR
FBFBFBBRRR
FFFBBFBRRR
FBBBBFBLLR
FFFFBFBRLR
FFFBBBFRLL
FBFFBFBLLL
FBFBFFFLRR
FFFBBFFLLL
BFBFFFFLLL
BBFFFBFLLL
FFFFBFBRRL
FFBBBFBRRL
BFBFFBBRLR
FFFBBFFLRL
FFFBFBBLLR
FFBBBFFRLR
FBBBBFBLRL
BFFFBBFLLL
BFFBFBFLLR
FBFFBBFLRR
BFFBBBBLLR
FBBBFFFRRR
FBFFBFBLRL
BFFFFFFRLR
FBBBBFBRRR
FFBBBBFLRL
BBFBFFBLRL
BFBFBBBLRR
FFFFFBFLLR
FBBFFBFLLR
BFFFFBBRLL
FFBFBBBLRR
FFFFBFFLLR
BBFFFFFRLR
FBBBBFFRLL
BFFFBFBLRR
FBFBBBBLLR
BFFBFFBRLL
BFBFBFFLRR
BFFFFBFLRR
FBBFFBFLRR
BFFBBFBLLR
FBBFFFBLRL
FBFBFBBRRL
FBFFBFFRRL
BFBBFBFLLR
FFFFBFFLRR
BFBFFFBLRL
BFFBBBBRRR
FFFFBBBLRR
FFFBBFBLLL
FFBBFBFLLR
BFBBFBFLLL
FBBFBFFLLR
FFFBBFFRRR
FFBBBBBRRR
FFFBFFFRLR
BFFBFBFLRR
FBFFBFBRLL
FFFFBFFLLL
FFBBBFFRLL
FBFBFFBLLL
FBFBBBFLLR
BFBBBFFRLL
BFBBBBBRRL
FFFFFFBRRL
FBBFBBFLRL
BFFBFBBRLL
FFFFFBFLRL
BFBFFFBLRR
BBFFFBFLRR
BFBFBBBLRL
FBFFFFBRLR
BFBFBBBLLL
BFFFFFFRRL
FBBFFFBRRR
FBBFBFFLRL
BBFFFFFLRL
BFFFFBBLRL
FBFBBFFRRR
FBBFFFFLRR
FFFBFFFLRR
FBFBBFFRRL
BFFBFFBRRL
BFFBFBFRRL
FFBBFBBLLR
FBFFBFFRLL
BFBFFBBLLL
FFBBFFBLLL
BBFFFBBRRL
BFFFFFFLLL
FFBBBBFRLL
BFBBBBFRRR
BFFBBBBRLR
FBFFBBFRLL
BBFBFFBLRR
FBFFBBBLRR
BBFBFFFRRL
BFBFFFFLRR
BFBFFBBRRR
FBBFFFBLLL
BFFBBBFRLR
BFFFFBFRLL
FBFBBBBRRL
BBFFBBFLRL
FBBBBFFLLR
BFBBFFBRRR
FBBFFBBLRR
FBBBBBBRRL
BBFFFBBLLR
BFBBBBFLRL
BFFBFFFRLR
FFFFBFBRRR
FFFFBFBRLL
BFFFFFFRLL
BFFFBBBRLL
FFFFFBBLLL
FBFFFBFLRR
FBFBFBFLLL
BFBBFFBRLL
BFFFBBFRLR
BFBBFFFRLL
FFFBBFBLRL
BBFFFFFLRR
BBFFFBFRLR
BFBBBBFLRR
FBFFFBBLLL
BBFFBFBRRR
FBFBFBBLRR
FBBFBFFRLR
FBFBBBBLLL
FFFBBFBLLR
FFFFBBBRRL
FFBBBBFRLR
FFFBFFBRRL
BFBBFBBLLR
FFBFFFFLRL
BFFBFBFRLR
FFBBFBBLLL
BFFBBBFLRL
FFFFFBFRLL
BFFBFFBRLR
BFFFBFFRRL
BFBFBBBRLL
BFFFFFBLRR
FBBFFBBRLL
FFFFBBBLRL
BBFFFFBLRR
BFBFBBBLLR
BFFFBFFRLR
BFBBFBFRRR
BFFBBBFLRR
FFBFBBFRRR
FBBBFBFRLR
BFBFFBBRLL
BBFFBFFRLL
BFFFBFBLLR
FBFBBFFLRL
BFFFFBBLLL
BFBBFBBRRL
BFFFBFFLLL
BFBBBFBLLL
FFBBFBFLRR
FFBBFBFRLR
BFBBBFFRRR
BBFBFFFLLL
BFFFFFBRLL
FBBFBBFRRR
BFFFBBFLRR
BFFBBBFRRL
FFBFFFFRRL
FBFFBFBLRR
FFBFBFBRLR
BBFFBFFLRR
BFFBBFFLLL
FFBBBFBRRR
BBFFBFFRRR
FBBFFFFRRR
FBBBBFFLRR
FBBFBBBRRR
FFBFBFBLRL
FBBFFFBLRR
FBFFBFFLRL
BFBBFFFRRR
FBFBBBFRLR
BFFFFFBRRR
FBFBFFFRRR
BBFFFBFLRL
FFBFBFBLLR
FBFFFBBRRL
FBBBFFBLLL
BFBFBFFRRR
FBFFBBBRLL
FFBFFBBLLR
FFBBFBBRLL
BFBFBBFRLL
BFBBFFBLLL
BFFBBBFRRR
BFBFBFBRRL
BFFFFFFLLR
BFFFBBBRRR
FBBBFBFRRR
FFFBFFBRLL
BFFFFBFLRL
FBFBBFFRLR
FBBBBBFLRL
FFFBBBFRRL
BFBFFFFLLR
FBFFFBBLRR
FBBFBBBRRL
FFFBBBFLRR
BFBFFBFRRL
BFFFBBFRRL
FBBBFFBLLR
FFBBFBBLRL
BBFBFBFRLR
FFBFFBFLLL
FFFFBFBLLL
BBFFFFBRLL
FBFFFBBRLR
FFBBBFFRRR
FFFBFFFRRR
FFBFBBBLLR
FFBFFFBRLR
FFBBBFBLRR
BFFBBBBLRL
BFFFFBFRRR
BBFBFBFRLL
FBFBBBFLRR
FFFFFBFLLL
BFBBBFFLLR
BFFBFBFRRR
BFBBFFBLRR
BBFFFBBRLR
FBBBBBBLRL
BFFBBBBRRL
FFBFBFFRLR
BFFFFFBLLR
BBFFFFBRRL
FFFBBFFLRR
BFFFFBFRRL
BBFFBFFLRL
BBFBFBFLRR
FBFBBBBLRR
BFFBBFBRRR
FFFBBBBRLL
FBFBBBFRRL
FFFFFFBRRR
BFFFFFFLRL
FFBBFFFLLR
FBBFBFBLLL
FBBFBBFRLR
BFFBFFBLLR
FBFBBFBRLL
FBFBFBFLRL
FFBFFFBLLR
FBBFFBBLRL
FFFBBBBLLR
BFFBBBBLRR
BFFBFBBLLR
FFBBFFBRLR
FBBBBFFLLL
BFFFFFBRLR
BFBBBBFRLL
FFFBBFFRLR
BFFFBFBLLL
BBFFFFFRRL
FBFFFFBRLL
BFBFBFBLRL
FBBFBBFLRR
FFBFBBFLRR
FFBFBFFLRR
FFBFFFFRLL
BFBFBFBRRR
FBBBBFFLRL
FFBFFFBLLL
BFBBBFFRLR
FBFBFFBRLL
FBBBBBFRRL
FBFFBFFLLL
BBFFBBBLLR
BFFFBFFRRR
BBFFBBBRLL
BBFFFBBLRR
FBBFBBBRLR
BFBFBBFRRR
FBFFBBFLRL
FFFFBBFLRR
BFFFBFBRLL
BBFFFFFRLL
FFFBFBFRRR
BFBBBBFLLL
FFBBBFBRLR
FFFFBBBRRR
BFBFFBFRLR
FBFFBBFLLL
FFBFFBBLRR
FBFBFFBLRR
FFBFFBBRRL
FFFBBBBRRL
BFFBFBBLRL
BBFFBBBLRR
FFFBBFBRLL
FFFBFBBLRL
BFBFFFBRRL
FBBFFFFLLR
BBFBFFBLLL
BFBFBBFLLR
BFFBFBBRRR
FBFFFFFLLR
FFBBBFFLRL
FBFFBBFRLR
BFFFBFBLRL
FBFBBBFRRR
FFBFFBFRRL
FBFBBFBRLR
BFBFBFFRLR
FBFFBBBRRR
BBFBFFFLLR
FBBFBBBLLL
FFBBBFBLLL
FFBFFFFRRR
BFFBFBFLLL
BFFBBBFLLR
FBBBBBBRLL
FBBFFBFRLL
FFFBFFBLLR
FFBBFFBLRL
BFBBFBFLRR
BFBFFFBLLL
FBFFFBBRRR
FFBFBFFLLR
FBFFBBBRRL
FBBBBFBLLL
FFFFFBBLLR
FBBFBFBLRL
BFBBFBBRLL
FFFFBFBLRR
BBFFBBFLLL
FBBBFBFRLL
FBFBBFBLLL
BBFBFBFLLR
BFBFBFBRLR
FFFFFBFRLR
FFFFFBBRLL
FBFBFBFRRR
FBBBFBFLRL
BBFFBBBLRL
FFBBBBBRLL
FBBBFBBRRR
BFFFBBBLLR
BFBBBBBRLL
FFFFFBBLRL
BBFFBFFRLR
BFBFBFBRLL
FFFFBBFLLL
BFBFBFFRRL
FFBBFFBLLR
BFBBFFFLLL
BFBBFFBRLR
FBFBFFBRLR
FBFFFBFRLL
FBBFBFFLRR
FBBFFBFRRR
BFBFFFFRLL
BFFFBBBLRL
FBFBBBBRRR
BBFFBBFLRR
FBBBBFBRLL
BBFFBBBRRL
BFBBBFFLLL
FBFFFFBLRL
FBFFFFFRRL
BFBBBFFLRR
FBBFBFBLRR
FBFBFBBLRL
FFBFBFFRRL
BFFBBFBRLR
FFBFFBBLLL
FBBBFBBLLL
FBBBFBBRRL
FBBBFBBLLR
FBFFFBFLLL
FBBBFFBRLR
FBBFBBBRLL
FBBFFFBLLR
FFFBFBBRRR
FBBFFFFLRL
BFFFFBFRLR
FBBBFFFLLL
FFBBFBFLLL
BBFFFFFRRR
BBFFFBFRRR
FFBFFBBLRL
FBBBFFBLRL
FFBBFBFRRL
FBFFFBFLRL
FBBBFFFLRL
FFFFBBBRLR
FFBBFBBRLR
FBFBFFBRRL
BFBFFBFRRR
BFBFBFFLRL
BFFBFFFLLL
FBBFBFBRRL
FFBBBFBLRL
BFFFFBFLLR
FBBBFBFLLL
FBFFFBBLRL
FBBFFFBRRL
FBBBBBFLLR
FBBBFBFRRL
FFFBBFBRRL
FBBBFFBRRL
FBFBFBBRLL
BFBBBBBLLL
FBFBFFFLLR
FFFBFFBRLR
BBFFBFBLRR
BFFFBFFLLR
FBBFBBFRRL
FFBBBBBLLL
FBBFBFFRLL
FFFBBBFLRL
FFBBBBFLRR
FBFFFFFRLL
BBFFFFBLLR
FFFFBBFRRL
FFBBBBFRRR
FBBBFBBLRL
BFFBBFBLRL
BFBBFFFRLR
FFFBFBBRRL
BBFBFBFRRL
FFFBBBFLLR
BFFFFBBRLR
BFFBFFFLLR
BBFBFFFRRR
FFFFBBFRLR
BFBBBFBRRR
FBFBBBBLRL
FFFFBBFLLR
FBFBBBFRLL
BFBBFBBRLR
FFBBFFFRRR
FFBBBFBRLL
FBBFFBFLRL
BFBFFFBRRR
BFFFBBBRLR
FFFFBFFRRR
FFBBFFBLRR
FBBFBFBLLR
FFFBBBFLLL
FBBBBBFLLL
FFFFBBBLLL
FFFBFFBLLL
BFBBBBBRLR
BFBFBBFLRR
FBFBBFBRRR
BFBBFFFLRR
FFBBFFFLLL
BFFFBBFLLR
FFBBFBFRLL
FBBBFFFRLL
FFFBBFBRLR
BFBFFBFLRR
FBFBBFBLLR
FBFFFFBRRR
FFFBFBBLLL
FBFBFFFRRL
FFFBFBFLRR
FFBBBBBRRL
FFFBFFFLLR
BFFFBFFRLL
BFBBBBBLRL
FBBBFBFLRR
FFFFBBBLLR
BFFFBFFLRR
FBBBBBFLRR
FBBBBBFRLR
BFFBFFFRRR
FFBFBBFLRL
FFBFBBFRRL
FFBFFBBRRR
FFFFBBFRLL
BBFBFBFLRL
FBFBBFFLLL
BBFFFFBLLL
FBBBBFFRRR
BFFBFBFRLL
BFBBFBFRRL
FFBFBBFLLL
FBFFFBFRRR
FFBFFBFLLR
BFBBFFBRRL
FBBFFBBRRR
FFBFBBBRLL
FBBBBBBLLR
FBFBBFBRRL
BFFBFFFRLL
BBFFBBFRRR
FBBBBBFRLL
FBBFFFFRLR
FBBFFBBRLR
BFBFBFBLLR
FBFFBFBRRL
FFFBBFFRRL
FFBFBBFRLR
BFFBFBBRLR
BFFFBFBRRR
BFBBBFFRRL
FBBBFBBLRR
FFFBFBFRLL
FFBBFFBRLL
FFFBBBBRLR
FBBBFBFLLR
BFBFBBBRRL
FBBBFFFRLR
FBFFFFFLRR
FFBFBFFRRR
FFFBFBBLRR
FBBFBFFLLL
FFBFFBFRLL
FFBBBFFLRR
FFBFBFBRRR
FFFBBBBLRL
FFBFBFFLRL
FBFBBFBLRL
FFFBFBFLRL
BFBFFBFLLR
BBFFFBFRLL
FFBBBBBLLR
BBFFFBBLLL
BBFBFFBRRR
BFBFFFBRLL
FFFBFBFRRL
FFBFFFFLRR
BBFFFFFLLL
FBBBFFFLRR
BFFFBBFRRR
FBBFBBBLLR
BFBFFFFRRL
FFBBFFBRRL
BFBFFBBLRL
BBFFFBBRRR
FFFBBFFRLL
BFFBBFBRRL
BFFFFFFLRR
BFBBBBFRLR
FBBFFBFRLR
BFFBBFFRRL
BFFBFFFRRL
FFFFBBBRLL
FBFBFFFRLR
BBFFBBFRLR
BBFFBBFRLL
BFFFBBFLRL
FBFFBFFLLR
BFBBFBFLRL
FBFBFBFRLL
BFBFBBBRLR
BFBFFBBLLR
FBBBBFBRLR
FBFFFFBLRR
FBFFBBFRRR
BBFFBFFLLL
FFFBFBFLLL
BFFBBFFRRR
FBBFBFFRRR
BBFFBBBRLR
FFFBFFBLRR
FBFBFBFRLR
BFBBBBBRRR
BFFBFBFLRL
BBFFBBBLLL
BBFFFFFLLR
BFBFFBFRLL
BFBBBBFRRL
BFBBFFBLRL
BFFBBFBLLL
BFFBBBBLLL
BFBFBBFLLL
FBFBFFFRLL
FBFBFBFRRL
BFFBFBBLLL
FFBBFBBRRR
FFFBFFBRRR
FBFFFBFLLR
FBFFFFFRRR
FBBFBBFLLL
FFFBFBBRLR
FBFFFFFLLL
FBBFFFFRRL
BFBBFFBLLR
BBFBFBBLRL
FBBFBBFLLR
BFBFFFFLRL
FFBBFBBLRR
BFBBBFBLRL
BFFBBFFRLR
FFFFBFFRLL
BFFBBFFLRR
FBBBFBBRLR
FBFBFFFLLL
FFBBBFFRRL
BFBBFBFRLR
FBFFFBBRLL
FFFBFFFLRL
BFBBBFBRRL
FBBFFFBRLR
FFBBBBFLLL
FBBBFFFLLR
FBFFBBFLLR
FFBFBBFRLL
BBFFBFBRLR
FBFFBBBLLR
FFBFBFBRRL
BFFBFFBLRL
FBFFBFBLLR
FFBFBFBLRR
FFBBFBFLRL
FFBBFFFRRL
BFBFBFFLLR
FBBBBBBRRR
BFBFFFFRLR
BFFBBBBRLL
FFFFFBBRRR
FFBFFFBRRR
FFFBFFFLLL
BFBFFFFRRR
FBBBBBFRRR
FBBBFFFRRL
FBBFFFFRLL
FFFFFBFLRR
FFBFBBBLLL
BFBFFBBRRL
FFFFBBFLRL
BFBBBFBRLL
FFBFFFBLRL
FBBFFFBRLL
BFFBBFBLRR
FFFBBFFLLR
FBBFFBBRRL
FFBFBBBRRR
FBFBFFBLRL
BFBBFBBRRR
BBFFFFBLRL
FBFBFBBLLR
BFFFBBBLRR
BFBFFFBRLR
FFFBBBBLLL
BFFBFFFLRR
BFBBFFFRRL
FBFFBBBLRL
FBFBBFFLRR
FBFFBBFRRL
BBFBFFBRLL)";

constexpr char input6[] = R"(donpevkjhymzl
ezyopckdlnvmj

tqwfdoxvim
imzpqwruhynlca
wkemdqfvigo

kztsuvpgoheyfdrqbnxmlw
onzbdgsrqxhetkvypfulwm
eomvusqtbnwghfzdyxplkr
lthqvfxbnrpdoekugmzyws

tlsgumiveq
suevmtgrix

jpcvhae
kfwg

scbmvulizfajxwdkohynr
nrwjblvodackhmteufixz
crjnozhvmxuilfdgwbak
cjxfvaklnrmzhodubiw

wepjrhznqbsdcg
bgkxwdzjpcnh
bzhngpwdjc

zcwd
bcsdwi
dzwc
cndjtw
widc

fxcdeujrgyimhtnbl
rgxubfaswmyetdzcpj

qcyvwlznk
pixvryeqmabkg
oyhwkvslqtu
syfvqkj

oxaqtvbck
xdaocgmjbhr

itmqhlrpfkjex
glipefrhqdjt
lfxujtahqrkiep

r
r
r
r
r

zrevcbqlfd
fevqbcrz
bznrqefvc
venbfqczr
ezcfrqvb

jckiqemdhafpblg
hmgkceqdfablipj
apfhidgbqjmeklc
jbgafikphedlqcmu
jgipbhyrqkcadmtloef

oc
cwl
c
pqcum

dyqefuvk
jwpeyutcvrqfknd
ueqfvkdy
mqkedfuvy

wjmflnycpikaudbh
badpwluhyckmfijn
laicfpmukdjwbyhn
wbunyimlakfhjcdp
pkdayicwhjulfnbm

lyvucwjsqpobtxfz
juplywzofxqtbc
bjcpotyxfwzquil
gqcpxouftzylwjbk

o
o
om
o

cv
cv
dkv
nlqvar

uympvfa
fpvmauy
upfmyal
mrfxyaup
fpauym

yefrc
eycrf
jcery

mikwhc
kwhicm
wckmih
cimhkpw
cwkhim

jr
nj

qdn
dpobj
bdhkcirag
lxfszwtvyeum

evztimrx
wvtesixcjz
xezvnti
itexvzrp

cdmytuohafwrn
onqrdzbtajhwcy
agvoswrcytkhn
ionpyahrctwl

nfizudpgjas
zcsfpgiujdan
zuasjgfnipd
pdszgjniauf

tmznlxi
znilmx
nzmlix

praqydusmlntzoejbgkficvwh
paxnwvbzejqlgryuhscotfikdm
ydvetlcfiqpnbmorhswazujgk
tczvygrfuqibdelpwkamjhnos

wtkx
txkw
tkxw
wxkt
kwxt

xozfqwskiyjdlmerbtgvpu
ztviaxedfwjloryqmupb
zuwqtfbdoirejmxvply
prldimefuqtyvobwjxz

lnbchfiueqgkvdypxjsrt
gjfsnriecpdhuxqyktblv
evrqsyfgdpnujtcbxilhk
icgrdksboavhfluqyjtxpnme

fvsdtxqopuyizback
xdptiuasqfzkvhcybe
bktzicvfxwuyhspoad
dybuvfizapxcslrkgt

sip
y
y
v
o

binuks
iksubn
unbisk

ec
ce
ce
ce

mszqjkigr
zqjsimgr
jgszimrq

brgqwumhfsjoan
tqjoruxwhm

bexsrhfowdm
qmrwjfbedxy

bmjzeradwpcvq
lzbmqdjw
ukfbhtjdqsyomzi
zplwmjqbd

suacmtzvfwgkberyj
yawctsbmvrzujkeg

wkvdqfrj
rjstv
irjv

gjrzwdlaxhnybk
fwcelavjtkq
sjkwyudaiogpl

cepjqyrxgbtozmvsnwfaldi
ewblsmizdaoxvpqfgjncyr
dmqjczpuflxkvogiwybaesrn
izcvlbrxopjgmfydeawnsq

krbsuf
ybfusk
ksrubfh
kbuwsf

cflimnt
fimtcny

gr
gr
gr
rg

boksruxtpwhaylfvezinmgq
pghkurfnlsazwxtqemvy
ahwztefxyujgrmknvslqp
lvtrehgwmyszpfkxauqn
uvwytrhqmfaklgxsnpezj

ojwxbtai
ebjplmknha
gzjab
yrdbja
aqgbjv

xqbadntilesgj
qafljdgeistxnk
vdhjisgpnlecatx

bctjy
jzcbtly
yjctb

hu
x

hbxnqzvimyjpr
xjvqmhryzib

xgt
qxgt
lxgt
xgt

bcrfvtxq
bwodrhgfnj
rfbelmx
xfrpub

z
z
z
z
z

wkqnhmyvpgcafs
anuqkgcmpsh

gakdvbjity
uxqszephnmt

gsmqkvlw
ygljknwqs
vnwlksgq
kflgqodsw

esixowgfrdkchbvluyjzmt
zwlbyjexfgrkivthduscom
bejtzkgouvrhwdciylfmsx
vgiwfukltmcxzhdjyrseob
bvuzhwkjfelxmgiosrdyct

jxcwht
jtwo
jtw

alugckni

rdfbt
ertfmjb
urfakt
tfrdv
rjftg

zgvcnoyk
jrbydop

yjhzdwgrubc
thdijqcoegmzybwxsfn

sc
cs
sc
sc

ixgqhbsoyzektrjvlu
eizybgxusrhqkoljtv
bgsjuteyoivhkzxlrq

eimgdwa
ubqsylj
pojylrx

hlekwmnst
khnpvb
lhkgbxo
khoj
uqkfihrz

tvahpybefouj
htfjeyaov
ovjehatfy

qcwplbzsxej
evtnljchmoqu
zlecjqdx

kgswxnvjym
xkbjymvgwnrd
njkompgxyvw
vhzwnfkjxgmiy
gkvmrtqjnxyuoaw

hif
pcx
eiad

vnsk
nkvs

ekvmjptnlg
vgqthpnmzeyu
tvgmnspexj
mvektcnpsdlg
gpirbeamcntkvo

xzhbpqwomfny
dzneqbmtkarsocugpwy

e
e

cgdbaqiwxkhoune
ljzpfsmtvr

bemtdp
mcbpwetzxksrn
bmpte

zxegywkmlanphqt
yrqbijeg
ocgyqferd

thlbysev
tlhsbyve
ysteovhlb
blevshyt
vehyktdlbs

jvzqgfrmnsyedwkt
wylnmqpsdjferzvg
rmdwjgyfzsqevn
izvrjqmdwnfxegyks

jrexchzindpmboa
pconhxiezjmdbra
rocpziedxjanmbh
pjzxdrmoienhcab
ioexrmhdbzjcpan

ubljqsrwgpifknhd
iadsruznklqwpj

zelwsurf
sewlzu
wluzes

pkhfwsqdj
sjfzpdiqkohubt

fovri
oibrvf
rzvoyhf
bmtrfov
vfopr

fjrisuvcobytqdzklhap
qnhimfbzxoawcrdky

zekrvspofhlx
mhkfeol
lkoehmf
olhkfe
hyofeiklm

c
ban
cih

zexlfrhwpbqjd
aqzwrjhexpbcl
exsjqpwhbizr

mluc
a

bwrmls
xtnfjyqc
aegov

jbaygdz
zefikdjxb

xsqwujrdcbaghpe
bujaxwhprcsedgq
ubgdahwxrqjsecp
qgapujrxedcwshb

guyhqjtcipsoevnrzbf
hzoinufbgryesvtjpqc
cohugrenvjtibzsfpqy
ietnfojgvczshbqurpy
zrnoeugthfyqsplcvibj

jov
ojv
voj
voj
jov

qxpyrsgkwz
rskzywpgqx
zpgwykrsxq
ghsywzpxkqr
grzxpwsqky

u
u

jynpslzeuqt
ragksuyzv
eojku
dxmhui

zlnbdqyxpuwjhierm
gsqxnzlwrhbympuedji
ycmqodpxirekfhnubwj
givpsxwyburhmjdqetn
xendipyuhmjqblwr

xqncdiyzkwfuejv
ziquhfdxcnvjkyw
uznkxchjfyviwdq
cnkydfiwzvxjuq
ywkjfudicnxhzqv

wfuesonbqzkxt
opuqtskbfdzjwn

mzanofu
zdxnufaoh
owzfuamn

egtdsnihaxql
altgoisbe
avztsiejlpfu

a
a
a
v

ygvdhfqw
gwyfvq
qfygvw

gojmeplisnrc
etudhorwnsmc
rmosnxepkc
mnxcobsrgke
oncrsmez

c
c
c
c
c

cjurmasxnkglvzqwi
aiwmsgrvuckzjtbqdnx
uizfxqvsnkegacjrmw

nyurgszpwcb
qtkzbywsregumfcoh

t
xne
g

svdh
wercbzj
mqu
dlh

qmvhgiyzxj
nhveqgzyf
tygvhqzf

hlryuivgbxjnmew
qpjnvukoigzmxerby

plguriyjtvnqfxaozdbscwe
gercvwnlqbiadpouzsftmjy

vhcrk
lw
ny

vwhjsgcu
jvcswhgu

zsaxovhnumj
smyhanuvjxzog
wusmzvhxanjo

xonrstqdzjym
ojdsrflmethvgzyuq
myodgskltzrqj
mdyujcpsfqzotr
qyomsjdtrazibw

zfgoqjkmiyawlexph
gjhpfeizyolwmqaxk
upifygltsaewxmqokrhzj
xmjwzhakyiqepgolf

ithjs
jskti
sikjoznph
kroifsazxj
uliecdbvyjs

k
k
k
l
k

trlpyzghaxdbjscqvkf
tsxpayjicvzbrgld
lazjdgtscnbpvx

qkncgfsoba
sganfqjockb
qkafbcnsog
afngkqbsco

bstnrzhxydgfplqcuv
rfvhpqynugltxzdbcs

ejh
ygqsah
inudlvmtcpozb
kexfa

bukyz
bynur
choulyw
ufy
kyqpu

nirqajlwbsu
brtfkzwycqn
rnbspwlxqiom

jkeyhbdagorvni
byhdjovrkaegni

vxeh
evkgx
lxvngk
pyajdzirvx

iyjltnzes
pisomvjnfly
liyjsnz

xymbztecg
tgwceozyxb
xeygtwabcz

ndsgmpyht
cpghtdsmny
htdgmspny
tmpdhysng

juvrlpx
vrxlpc
isnalvpkxr
lvpgxmarf

cshqipz
uzhsqcpt

giersvh
hsirdegv
isuvhegr
iesvhrg

zfyedlcuibhwsxrtagjqk
ceuadzmtrilfbyjqwgsx
jicptudzlwrayfgqxbse
nsreiaqwbgfoltdzcyvxju
rzebuolydjvxsgtafiwkcq

p
sigez
y
y

izlqxjauwfecbk
aiefxbl
bialfex

pvwbtn
mbvpwt
pwb
weblp

sldajoqrgikuxpehyzwb
ixtelkyzsawgjhord
osldejgizwrvyhkax

zouvafmwjprbsed
iepkswvumtabogdf

bprahdke
ctedr
berodl
qndmeyurxgjzfwi

ihpoydxbjck
itbhovcwdpkxjy
qpixnkcobyjhd
cbjopkhydix
xkoidcfbyjhp

zbsxrimcl
yxsrcbl
xsclmbr
uxhbrlsce

igytblcpu
gzabl
dnbmgl
sbmghxl

moxrsndj
jsxnd
ksdjnx
ndjxs
xdjns

izslgdythjorpw
jilzspofrhydtwg

ehbw
qdaw

qbvyjplgfomatzhc
cyflomhbatqvpzjni
bvuhxdotlfyajcqzpm

zcb
bzc
jcbz
czbx
czb

clrwvjduntqkgbzyxs
diakrlvxzytungjqswec
ugvxjkmcrsqlnwdzyt
xwvrycqhsgnztdklju

fiqko
oqfik
qofki

woyalnhrciezxkvutjg
lkogcnzietyjrvawxuh

pgwzuhdmx
pmuhwdzx
pdzwmhxu

ojyqvtzhl
tkjxlys

ltgwyonxpudb
moydwlpzugbn
dpnowymlgxu
wuoygpjnldhi
yanpwsugflo

nibmfhqscljzrtgyadue
dnsufmahjglyrqticbez
rslbjgdfuaqmyhtczien

dize
dem

pqdwgrcf
cwdgfpr
wrxpdlcfgu

kecojbdrlsivzahtfyuxp
yahlvfgdetoqjuiz
fzjivhaeylmtndowu

mqidyrcjlofwbasvzhu
qubfsroahdjipzvmcwyl
nvjplhuafzqwbmsdyrcio
jdmobxerwqslfzygavikuh

r
rt
renqh
rz
lr

wzegudnxlfmrvsj
othqwix
xbwahyotkcp

azgvil
uzl
p
kswcrxndhbjmty
qfpie

opmwj
po
nadxzfo

ermgqa
aqmygr

nvlhbi
kxbncilm
ilkpnb
zwednuoqtislb
nyjrbilf

exnctrkgqzhs
ih
hw
vfuh

lbpyefqwacjgidx
cejfqpbygdlxawi
qcdlewjpxiaybgf
jcqdxilyapbwfge
xpcidqyfalgjweb

mlitd
mn
ryphqgb
tcik
uitkdc

qerh
hyeqr
eqrh

m
m
m

kqbut
b
b
yhlbmszi

ign
ign
gni
gni
ign

duwl
dzuwi
olwud

de
ed
de
de

nkfuvrq
itdmjozkxgcpa

xbghdct
dcxgthb
gxdthcb

qbmerpojvlagihdxcw
alewovtqmixkcrjpdghb
joplxmaqvcrigbdewh
iulwvqpbjdeomcrxagh

qmwonecigvyrzxa
xcqovgezwmhn

rzkdhoqajeus
dakhezqusjro
dzjqoausehr
hsuorqizeydbtjva
ujqrheozsad

yexorb
eoyrx
reyozx
rxyeo

btxmgi
obaheumrtnx
bcxhumrt
bvkfwmxtqyls
xudptmizb

cue
ue
eu

aj
ja
ja
ja
alj

sq
hqs

sxladpvgftwz
nyuqbcajomrhis

heoyntkc
xnygtkohe
nhltkeyo

tmsgiqvfluh
dlwqtbfacozgmi

j
m
nj

hfrbmwjc
cbjwmhx

ketvc
cektv
vktec

yenoaclvitgfupmhrz
ctnopmlgiyjqkersxhuf

k
k

qswzr
jhgzcoayqn
viqf
lmetqdubk

kcqfhwru
zjqvdhm

yasdizqwhrvxo
roswcnaxiqvhgbz
isvhrxoqmapwkz
yxachvrzisqobw
relszwiahvxqo

d
d
d
j
d

epdrbcsvx
xpcdvbres
bxdpevrcs

nx
ybnx
nx
kxfn
nx

khq
qtjhu
nxohafelcq
pjhqu

xhfwlatiepzmcjsnrbkdo
zpnxfjomsecithrdalkb
arxlodtjcmqeisbzhfvnk
rdakehsfxnjilzcbompt

d
d
d
zylwd

dw
wd
wd
wd

lifx
lzien

xmlfdkqn
zstlvkehudbonmipqwxa
dmnrxlqkj
xdmqkygncl

fxpsjhumkirzvlnwobeayt
xfvjcaihbropmdstgwenukl

wjcfk
nfjc
fcj
fjc
fcjn

lyr
ylr
ylr

eytqsihkocxbrgvzdmw
dzfrsktxvcwqomiegbh
kcgswrtimvjoeqbduxhz

zuvlq
uzlqv
vzuql
quzvl
lfquvzh

jbhr
jfbrxh
brhj
jeharvbq
zjbhnr

hrx
rihx
hxr
hxr

puljdkigxwsmntb
lpiwntubmkqgsj
blwsukigthjmpn
frmkltgbyeusjnwpi
lpqnkgsjmbtuiw

ujtrelawhfiqsozbgxpk
woibperhglkjtqfxvsau

wkthv
olvqacdyxgpmh
khvsnw
hevwkb
hrvfej

ui
iu
fiu
iu

vcapxqg
qkjpwuganhb
pegqaxf

qbelwaf
qfjcgewn
mqwfxe
wqycfeu
qohfeiwprdt

wo
rocaw
wo

hqeyfglrw
behfylwq
yhelzwsfqb

sduomekpxfrliwavytjhzq
svpdefjmaircyxuqohlwztk
kvtrhupelqmxjsowdizafy
uxyvefotzjwidhsprkmalq

fprevkusajgncldhzimbwqot
qwnvsizdjetcmryhoalugkfb
fmwsktgqhrlnijzbaoceuvd
nbarqeultwsjmhivfdkcozg

jqu
ujnq

endwgsmzfcaqr
qsmwfrgzacned

vwme
wjamveb
weum
twmezrg
bawjem

kdhzcpgqiomfwyjlsatnu
gktdaqlozhjcmupyvnwsfi
ohncldbjausiptkxwyq

geukr
kfgn

q
q
q
q
h

hrb
rbh
rkhb
rhb

ldpencbzmxshwia
elurvxpznahigdkocmwb

vxeptowscmuhig
owxegucpmlsty
ygqeuotpsmxcw

iowfcmk
gokwlrzmnep
xowmk
woknuvym

zmhc
zhmc
cmzh

jxp
xj
xjy
jx
jx

bwhiryzfeutoxl
msnpivuqwkbajcd

mzfcrdpxusvtohgnqjlbae
xfrynequbdjtvamlowgpczs

dn
d

rchyd
dryh
hrydp
rdyh

nejf
fijnrm
nhlfekiz
whnfe
qotxnbspgyvduafc

ielxrbunfsh
kqewhomcgptyadv

qktlubevfoiynsadzhxwpmj
ejwhsuogyqxzrkipbmcdf

f
f
f
f

ydhrpqvelcit
lhrdkatesyivqp
fepwvtdqrljznuybih
ohemxydrqtpivl
pvgiyltqehxdrs

mpwesbxkogizjcfrlq
fjgwbymkzselxprqoi

kbdyqaufern
myzgiwcp

ixjotau
cfljotixua

pulwjsrahkezq
jlcrvdpiuazfsn
zbycmjglspauxdr
glcaposfzjuidvr

tdfqh
gcz
fnpmc
vak
orbu

dbgzyspejv
xigeymrdk
mwexdgy
yeadugmth
cdgkewyfq

aduflnjh
jdfhnaul

iwpk
qufnbav

r
wd
r
r

nq
rq
yzq
nzq
eqpfb

cqnv
cnq
oncv
cnwz

a
b
a
a

ibc
zca
ca
lc

jhzuqnitk
tikqjzubr
onzkiuqjt
qujthznmoik

mlbdxcuzjeoipqytaskvwrgfnh
zghibtpoqrjyancuskdxmlwfev

kuolxsifydbmep
mlpoiydexfbsuk
fbmkyxduepsilo
dozbuyktrmxiwlnpscafe
dikmsobhepxuylf

jkebfzawcyxsqniurldpmoh
rqjwymcuaniofldsbek
ubkijedynomascflqwr
uatfielnyoscdkjqmwbr
wigmqrkdysloejcbufna

bdeaowzflgtuycp
ueghpydwtlxjcavf

pkye
ke
ket
ek
ek

lhntvadrkufwescgb
qdrbnzwfieltuoxagvpkch
ngvkjdwamlhuyfrtbce
sfgarwlhbnedtcuykv

y
a

vosbcqyuwhk
skycvquolwhb
csuhwvoqbky
kcobuywvshq
uyqbwvcshko

lsen
nzrlv
luhjinxq
ntml

bxtjw
ibtjswpqflvx
xodtjwrb
xrwjtyb
wxjbtr

vc
vc
vcen
bctvl

vt
tv
tv
tv
tv

akx
ank
ka
kax

fi
i
dilzc
i

e
a
e
c
c

wgishljxzeufqbdamry
bmgrxydsahiqjfluwze

jzhwgbeotdmup
uskhbvypwl
wcpkhfub

mgoflsua
gmluaofs
oasgflum

myswzflpqvuatxknbdegj
uqbgdevtljwfszkyarpxmn

ctwlfnisxezhdpu
tlczdnwshmip
ctwpnslzihd
nglihtpdsmzcw
cdlhwpiznst

kyblsmitxjq
kxlmbsijar
jcxlsbfvmkzio
vbrzijolaxwkms

k
k
k
k
uk

thnxru
qxyrtuhn
tnhusrx

eomv
cgvxfmyseqbi
verm
vanem

dhbuplfwreozxygvic
gexucnfplhyriwozbkvd
wuyoezvchfigxbdlrp
fpyrciwvdzugxloehb

tzjvre
rvzjet
vztejr
evjrtz
evzjrt

zkwqa
gnxlruozpfe
qmtzchky
vybzw

ivanhem
mnahevi
mihnqeva
anihemv

elw
bewl
lew

mcrfzgkphioj
rlpigtmhckzo
azpirgsckuofhm
mhedpqxbozignk
jkhyopizgmav

cewmxkn
cxmenwk
ewxcnmk
knmxecw
kmexwcn

furandwxcpebkih
bockvuwxhaiperfn
abfkupcnhzerixywm
kbeanuxihdcpwrf

kydunijzc
unywcfkizjpd
yjnzmkldeuhic

jbpky
pbky
kyb
djbkyg
blyfku

uaksgtnm
maxngukvst
seftjuknihaogm
tnwukgampsd
mygksatnu

frykaibhmqocwupnles
wcamqulkhsbeiorpynf
rycpimbhakleuqfnosw
oeynsahumfblqcrikpw
scabehnompiquklwfyr

nxi
ni
in
in

zrqglywd
tqyehuroi

snzbcvtkryhxuwfiojqmade
qduzryecmobsntxhakviwfj
keftvjiozrxambcqhsdnuyw

elidfk
zkdli
ilkd

losmpg
pgmrasco
jhsbpofieg
ongcmps

kiglzftorbv
yitmpjkqzha
mhiqkztejuncx

mpskhgatqrxcywlebduf
pexqbwaycfsldgrhtk
balxfgvyecwtshrpkdq
kewstgclydqhprxfjaib

ey
yq
qy
y

i
k

isu
insu

ncpakrm
rnekmacs

xs
xs
xs
sx
xs

y
y
y
y

sxcjonw
xsenoj
oipvxnsfgqkjl
zxbshnojwu
bjoszxn

zvathnqlcgxiboweus
wtuvanxlezihgcdso

xk
kx
kwx
xk

etrbigydaohsumc
pwmalnfvzjy

yhj
exhkjz
njho
jhno

syltikaxprongdmbv
tnmjzkqprsadyogvxbi
ahdvmgnskuixcywrbpto

rxinz
xk

svd
sdv
divs
vds

lm
adlyu
ql
ctkxhrnlb
vlujw

irhxaewlgqjf
jgiwhraltqkxe
hjgwaulrtixeq
geixhaljqwrd
mznqvjgsxelcroywapbih

bgtp
tblzq
fbtz
ltxb

hxolrdgytjwbazcmv
hrwxioacgyqtlzmbjp
bzwrumgstxhyacolj
jcyhrabglvzoxtmw
zlrmgxohetwakcybj

rns
tib

vbyqlneakcsz
rgmpdvwik

wobkderiq
yzhewd
fieqgw
smcpejwxlvut

afmznvekygspctobl
wpxrlbhdtqijyvou

dlh
lhfd
hdl
hdl

enbzhorlvais
lieszanh

sgvfkilbqa
aurnvsb
abnmshv

s
b
k
h

cw
webfiyz

mjdla
anzmd
dqjmla
adgpoum

tne
ne

ncdlqwmk
ikcndqw

p
egzj
piy

jodrtu
ohasru

kpufqxezgbdlj
kxglfedpzbqu
qbdlxepzkugf
kujqzpfglbex
hlkcuoepqbtgzxfr

tphmylucsnbevjrxdw
njdfmpvrxcb
rcnfmjdxpvb
bvmkrdxcgjnp
fjxvinpcdrmb

bvhdipkwsagrzqxoeultynfc
klefxwratbyvpiqhgudonscz
tbzwfraikuqhenxgsmoldypvc

lgubtdvcpnaeskrjwhfm
btzrnviochdeuwmlksfp

g
g

rgeanvoku
keuvzrogyan
onvegaukr
kfnogecvqrau

isnmdpj
skjxbgm
sbjguma
cmosbqj

ctafijyo
egbvdhpwksmu
xntqyr

eowfzg
zfgeow

aoib
oaib
ouabi
aiob
aboi

wyjviubfg
htdkazcpoml

dxtyqhrabwfcokjezil
wtjbehzkilgcvarxqyfuod
ftbpoadqejywichnzxrlk

dprqcval
rdvlpqa
phfuqrnjvd

iblxrpvzfqoujstwdnkhmce
mnstfolircdbxhwuzkvqejp
nkvrswjbtipfueodcmhxzql
kuhtsdviowqxncjpzmblfre

icsf
sbcif
icslf
sfchym
scgfli

chtybjgeowzmfqpnx
gfnbwlptcyxm
tyxapvnbimgfwuc
tnfmwpcgsdrxby

yxjhnaqbtvlpd
prlgthi
pemszgthl
pktrlhu

itplafwyzndrqcbgs
dnrbyaztwpifcqlgs
qrnbwcxifdspagltzy
swkziqbplcjngrautfdho

aige
txbvjl
tcbdj

mgyujcwaktszefqoirdhvxnb
zytsgavicowhmufxnkdrjbeq
hvlegnkiuqdmpxbcafrowzjyts

atsmqfczgdloujnbkh
clgmhtabjzknqudofs
kcqtjbusohznlgfmad
qtjbhdnoacfmksgvuzl

bejmhwlnv
jvhbmlwen
wmhlnejvb
mbenjwlhv
wbvnljhme

ojrf
ojrf
rfoj
jfor
jfor

mjgndvtfecposairblxhkz
vknpmfzbglhreoasjcitxd
bswvxjgfmerudnczytlaoihpk
xrifvklnjztgcaobhsempd

ymcthsuirlpzxbf
uyjxcfzirqm
nyumiwfgcexzr
rftouxzsvmalciy

midctzbgpsjqwer
iwtdebmsrqgz
nimbszqregdtw

lizoduphs
sruhdilopz

zsapyuc
kmqdneholgxvwb
tjricusf

h
lh
lmn
jo
y

tvqsz
sqdvpxecmby
znwqsujgv
nvgoqsf
vqst

scwm
wmc

uogmpy
zygpxu

y
cy
yc
yw
y

bmilekvzfouqjdc
zvfaodqhmcjklb

meh
ehm
hlem
emfynhp
mekh

nelmicxufzj
czjflxmwi
itfxzcpdlmjo

rfnxwmva
ouiarcb
jryekl

gtjdialpk
lyjmonspwf
pvdljz
lpjr
ukjexlbpq

r
r
r

hbz
xg

lsprfiznqxwoejkbmgyd
dmeqgizopjfrkxnwybls

ngprdljf
ljzrngf
fgrznjlu
yfgsjrln
glrjfnciu

wfv
wvf
vwfb

yqbpmancd
dfjrv
sdiolrvhwf

xvnbgkal
uxvfglisnak
kyclemvqjngotpxa
vgasnlkx

jkfoeuypq
hejyfok
zvilgoyjfmkw
fxkojy
ofkejy

xvoskgnrfi
nokrwivgs
sinrkvzgo
svnrikgoe
ovgsnirek

niy
nqiye
iywn
xyni

qauhvi
vaihqu

akpwgyulbfe
fauyvtzlkwngosb
cmghwyklrfbua
wpxcabemgfkqluhy

yqvlidbmhkpgtuszf
vjzyupbhlitq
yvulwitqbzh
izblthxqvcyu
aqfezybvkunihtl

slmvntra
vrslatm
rauqsmtv

mvb
m

tlzinqbsjgrw
bqsntjdr
qpcsbjntr

rodmgwef
wzekof
fzowe
ofwe
fokhwe

zpsimtknaldgfebq
bpadkftzilsegnxqm

mupfnj
hsnu
unh
syiuhcn

entlxzavdbpfsowuq
qfzntxowlbvdpasue
wznhspobtqleauxvd
pzwnsxluqbecdvato

bhowvre
sjztdmr
oevalywrx

vzdokpinc
dynavsgjo
nvsbgod

xjecrkvq
cejqkfrvx
vekmcjirxqgd
vckelqrxtj

abf
fuba
afb
baf

trcmhwa
mrwycftdha
bmhitcogjqeak

zlrufcghipwjxmkaqno
gprkuxlfhcqjawnm
anfygcklxwurpmqhj

szxdjetgavuy
xjtiyegua
yucexjtag

zudgemcxtp
woac
yiwco
ayckq
sjcqobk

hr
lpvn
pel
gykbqia
f

rzpmnhoeudlcawbiyfvxg
xeycvthsrfmwbpnaluzio

soyvdbuzf
uzdoysmf
gzsuyfdot

w
uw
w
w

mixeawbdrpozjqlvkhyf
arxnwybjzlhqdoeikgm
otdibuckxjyezwhlaqrm
kyzdirhxwaljoqbme
hdrmleqjybizwsokxa

og
glob
gvon
og

vqef
qve
qelshv
veq
qev

wtcfmjopqisz
tfmqigrjzcbp

poa
pokcw
jitdospb
rospav

csfqhwendrbigt
qfthwcrbnsedi

kx
kx
x
wcx
x

umxvbsypightkdeq
mknbothiadpeqx
khbieqpdtmx
ptbkiqwdhxecm
mkzhexqjatpidbf

inazybxjlp
ylaqbnjihxpz
ljybxnzmspiawv
teyjaxpfkdcblzni
zinyapbxlj

rdusztincoephyx
eythcponriszxdu
cimzenhxusdpyrot
prhtndyuscxoize

nptqdiemfalyuhbgv
xiynrzpaubelvftdkmgq
vahmlunpetgqiyfdb
luytfvqpbagmenid

fykps
kpfys
fkspy
fksyp

wb
gthprjo

gyshflcjudtnwiaborvxzqkem
ejzgxrkavbohntmscwqduyfi
xnjprtevydzkihfwbmagqcuos

odegpjrticlauqyk
jloadrvubcqgiype
orghjiqdfmawylnupe

blepmn
emnlpb

cflwhius
srqfuwcl
cjwspxlfu
lafrwcsu

euvyacbzm
tywmxaugpbc

vbafy
bavyf

tsqrmciwkvz
iqtkwrzbvms

hbdkfelts
ktedslbxf
elkvzfbpwtsod
blfekqsdt

bmxlhiakopjrvcnwduytef
jrbaflehdzcivxnkwputmoy

igmdlqvjkt
sntyfoxaruc
zhbtpuxew

qhftyzkdpe
zdfeptqkyh
qchpdkfytez
zfpqtydekh
ekfptzqdyh

mdnhxrtla
xdcmolrgefjat
xrdtlmiay
pmryuxtsdlhza
maldtxr

gzrycsoeifxqmlv
vqefmclnxsopikrgyz
rzqcveygiolxmsf
ecsvgyqflromizx

dqjormwctbe
ewmzxivtqk
vlwetqmg
tenqwzlxmak
hqkmfwetg

pamruofskhgx
nbaicywlvurjqt

cfhprmjydtwib
eylox
gqoxyz

mg
eyj

pqvdhf
dpqvf
pvsqdf

ocguwrzdpejvknfitbh
peodckrzbfqtiuwn
ezotrbnpwiducfk

ewahyrtcxpu
foqzcjeyuw
nuyewlcif
wcmuiyeb
vdykwmcieu

mrljx
rjoibh

eyaxshrvujwkd
wevusxahdyjkr

szgcmlvbwp
mlhzbvgtrpcs

pkytqjfruxvmawhsgdnbol
laosxkvfpmutbjngwqd
xkabnslgtfvudoeqmwpj
wopmuvgfxkqjdaltsnb
uvmspqfdjnkotgxwabl

c
rc
ch

wvha
whv
whv

lmcpuqaikfzyod
youipzclkmvftqa
cilkadqwzpyofmu
lmuacikyfopqz
uolwmcyzfpikqa

yncbugjr
nujgyw
vjyguon

yzchibmu
nujzplx

uhlcpnjxy
hyxlpunc
plnhcyxu
xnhkplcyu
lxychupn

sqhtziykurw
nscgvfodlmbejax

vodwenxyrmthbfpcgqzuji
vuopdbwtijqxgnlefczmsyhr

jnlwdvrtbaief
gwvijtnehc

yndsmw
pwsyndecm
mwyrnsfd

hantryqklbd
lfnrhakbydqt
lrynhdtqkba
hkqrtanbldy
aqdsgblhvyntkr

nacrmgizuqhwlpjx
fnigmsuzwplajxqch
gmzjuplhxiqnwac
ijlznaugxchqmpw

vbuozwdxrnetj
vuerdznwxobjt

zlyfqigecsjvbx
kmznlbuoejs

rce
w

nwjie
xulkaegsy
vipehm
oevcrbf
jme

lvyzgheudsna
ehzdyasuln
helnuyzxdsa
udbeasnyzhl
bynahsuldez

qepdrhamt
ifnd
nxfdy

gsuap
pmoausw
tsanupi

gyhaiveludnjftqbswzrm
smbvnyijzafetrlhdgwqu
hyevmqlcisxzbfukgndjtwra
lmzuqfewdjsvrgtahbiny

)";

constexpr char input7[] = R"(plaid magenta bags contain 2 clear lavender bags, 3 clear teal bags, 4 vibrant gold bags.
light teal bags contain 4 drab magenta bags, 2 dull crimson bags, 3 posh brown bags.
wavy gray bags contain 3 dark aqua bags.
faded magenta bags contain 3 dark crimson bags, 3 dark violet bags.
shiny aqua bags contain 1 plaid turquoise bag.
muted maroon bags contain 2 dim cyan bags.
pale yellow bags contain 5 dotted black bags, 2 drab silver bags, 3 shiny gold bags.
dark white bags contain 5 posh salmon bags, 5 wavy brown bags, 4 dark fuchsia bags.
plaid tomato bags contain 1 posh brown bag, 3 muted white bags, 4 vibrant fuchsia bags, 2 drab magenta bags.
wavy green bags contain 5 pale brown bags, 3 plaid turquoise bags, 2 mirrored maroon bags.
posh tomato bags contain 5 mirrored white bags, 1 shiny lavender bag.
vibrant silver bags contain 4 dotted lavender bags, 3 wavy green bags, 1 striped yellow bag, 4 muted plum bags.
mirrored cyan bags contain 1 faded plum bag, 5 dull purple bags.
bright yellow bags contain 1 clear yellow bag, 3 muted indigo bags.
shiny plum bags contain 3 shiny teal bags, 3 wavy gray bags.
striped gold bags contain 1 dull plum bag, 2 dark crimson bags, 4 bright lime bags, 2 vibrant teal bags.
faded black bags contain 3 faded bronze bags.
dim white bags contain 5 striped turquoise bags, 4 muted yellow bags, 4 shiny crimson bags.
light bronze bags contain 5 bright plum bags.
vibrant maroon bags contain 3 dim beige bags, 4 drab blue bags.
vibrant lime bags contain 2 pale cyan bags.
striped fuchsia bags contain 1 vibrant bronze bag, 3 shiny lavender bags.
mirrored indigo bags contain 4 dim gray bags.
posh bronze bags contain 5 muted coral bags, 2 pale orange bags.
drab coral bags contain no other bags.
mirrored violet bags contain 2 dotted purple bags, 2 posh green bags.
dotted lime bags contain 3 dull fuchsia bags, 4 plaid fuchsia bags, 4 pale gray bags, 3 drab fuchsia bags.
dull gray bags contain 4 bright brown bags, 5 dark blue bags, 4 dull cyan bags, 1 dark violet bag.
posh indigo bags contain 1 faded teal bag, 3 dark cyan bags.
shiny orange bags contain 3 mirrored green bags, 5 dim tomato bags.
faded lime bags contain 5 vibrant olive bags.
dim magenta bags contain 3 vibrant green bags, 1 vibrant olive bag.
light salmon bags contain 1 dim turquoise bag, 1 muted tomato bag, 4 bright black bags, 5 posh yellow bags.
bright bronze bags contain 4 pale black bags, 2 mirrored maroon bags.
striped yellow bags contain 5 mirrored red bags, 3 light tan bags, 4 vibrant teal bags.
dark teal bags contain 5 posh yellow bags, 4 dull plum bags, 3 muted plum bags, 5 mirrored beige bags.
plaid green bags contain 4 mirrored yellow bags, 4 dark aqua bags, 2 muted gray bags.
bright red bags contain 2 faded olive bags, 5 drab olive bags, 1 striped lime bag.
light plum bags contain 2 pale coral bags.
muted yellow bags contain no other bags.
wavy yellow bags contain 3 posh plum bags, 2 dotted chartreuse bags, 4 dotted magenta bags.
drab brown bags contain 2 clear blue bags.
posh purple bags contain 4 light coral bags, 1 dim aqua bag.
faded brown bags contain 2 faded salmon bags, 5 striped crimson bags.
dark blue bags contain 4 pale brown bags, 1 mirrored gray bag.
mirrored gold bags contain 2 wavy gold bags, 4 muted gray bags, 5 drab olive bags.
muted tomato bags contain 1 bright violet bag, 5 pale plum bags, 5 light plum bags.
wavy tomato bags contain 4 dim beige bags, 5 faded orange bags.
clear aqua bags contain 1 dull lime bag, 1 clear violet bag, 2 dim tan bags, 3 bright gray bags.
clear violet bags contain 4 posh brown bags, 2 striped fuchsia bags.
plaid yellow bags contain 1 pale fuchsia bag, 1 mirrored purple bag, 4 faded purple bags.
muted lime bags contain 3 dotted lavender bags, 1 faded turquoise bag, 1 plaid chartreuse bag.
bright orange bags contain 1 shiny aqua bag, 2 mirrored salmon bags, 3 posh red bags.
pale cyan bags contain 3 dim orange bags, 4 drab lavender bags, 2 bright coral bags, 5 light white bags.
dark magenta bags contain 5 dull salmon bags, 1 drab cyan bag, 1 dotted maroon bag, 1 dim tomato bag.
plaid chartreuse bags contain 5 dotted orange bags, 2 vibrant maroon bags, 1 dotted lavender bag.
dotted tomato bags contain 2 muted bronze bags, 1 dark magenta bag.
muted tan bags contain 2 plaid tan bags.
posh magenta bags contain 2 vibrant red bags, 4 muted gray bags, 2 vibrant maroon bags.
bright purple bags contain 4 bright gray bags, 2 plaid tomato bags.
drab chartreuse bags contain 1 light blue bag, 3 drab gray bags, 1 dim tan bag, 5 posh crimson bags.
shiny white bags contain 5 dull beige bags.
bright cyan bags contain 4 shiny tomato bags, 1 muted lavender bag.
faded blue bags contain 3 vibrant aqua bags, 3 muted orange bags.
light cyan bags contain 4 mirrored magenta bags, 1 dotted turquoise bag.
wavy salmon bags contain 3 clear tan bags, 1 dull bronze bag.
pale indigo bags contain 2 faded blue bags, 2 pale yellow bags, 5 dim tomato bags, 5 dark coral bags.
pale olive bags contain 5 muted olive bags, 4 dim olive bags, 5 clear violet bags.
shiny brown bags contain 1 dark green bag, 3 vibrant olive bags, 1 wavy indigo bag.
shiny coral bags contain 5 bright violet bags.
posh plum bags contain 3 pale coral bags, 1 dull green bag, 1 plaid cyan bag, 4 shiny orange bags.
shiny silver bags contain 3 dotted brown bags, 3 bright tomato bags, 2 posh tomato bags.
wavy gold bags contain 1 bright gray bag, 1 shiny fuchsia bag.
vibrant yellow bags contain 2 posh lavender bags, 1 pale purple bag, 5 muted plum bags, 3 faded chartreuse bags.
drab blue bags contain 4 drab silver bags, 4 bright plum bags.
vibrant turquoise bags contain 2 bright maroon bags.
pale violet bags contain 5 faded violet bags.
dark bronze bags contain 4 faded indigo bags, 5 muted yellow bags.
drab gray bags contain no other bags.
shiny violet bags contain 2 bright lime bags, 5 dull magenta bags.
striped tomato bags contain 1 wavy indigo bag, 5 shiny coral bags, 5 vibrant bronze bags.
dull yellow bags contain 3 muted teal bags, 1 dim green bag, 4 pale brown bags.
shiny lime bags contain 5 muted yellow bags, 1 drab gray bag, 2 faded yellow bags, 1 pale magenta bag.
vibrant tan bags contain 1 vibrant lime bag, 1 drab blue bag, 5 dark maroon bags.
wavy coral bags contain 1 clear gold bag, 2 drab tan bags, 1 plaid magenta bag, 2 pale lime bags.
bright beige bags contain 3 bright violet bags.
dim silver bags contain 4 bright plum bags.
plaid beige bags contain 4 dotted turquoise bags, 5 shiny salmon bags, 2 pale red bags.
light blue bags contain no other bags.
wavy brown bags contain 4 light yellow bags, 1 dark coral bag, 2 dark olive bags, 4 vibrant teal bags.
pale gray bags contain 5 faded cyan bags, 2 shiny lime bags, 3 striped blue bags, 5 drab purple bags.
vibrant white bags contain 3 drab gray bags, 4 faded blue bags, 2 clear white bags, 1 dull tan bag.
light lime bags contain 3 muted white bags, 2 dark fuchsia bags.
dark yellow bags contain 3 vibrant maroon bags.
vibrant indigo bags contain 4 dark olive bags, 5 light purple bags.
faded yellow bags contain 1 posh brown bag, 2 light blue bags, 4 mirrored teal bags, 1 dull crimson bag.
mirrored bronze bags contain 3 bright black bags, 4 faded blue bags, 3 striped salmon bags, 4 mirrored olive bags.
pale chartreuse bags contain 3 dim aqua bags, 4 mirrored lime bags.
plaid gray bags contain 1 vibrant aqua bag.
pale fuchsia bags contain 5 wavy yellow bags, 3 dotted brown bags, 3 muted black bags, 1 dotted turquoise bag.
vibrant olive bags contain 1 faded tan bag, 3 drab silver bags, 4 muted brown bags, 2 faded blue bags.
dotted olive bags contain 3 plaid gold bags, 5 mirrored salmon bags, 2 dim magenta bags.
muted purple bags contain 2 muted magenta bags.
dim teal bags contain 2 dotted maroon bags.
mirrored red bags contain 3 dim tan bags, 5 clear black bags, 3 faded violet bags, 1 mirrored olive bag.
dark lime bags contain 3 mirrored violet bags.
shiny beige bags contain 1 dim yellow bag, 2 mirrored coral bags, 2 bright salmon bags, 5 vibrant brown bags.
dim gold bags contain 1 shiny gold bag.
mirrored maroon bags contain 1 faded blue bag.
shiny olive bags contain 5 plaid olive bags, 3 muted silver bags.
wavy purple bags contain 3 dim cyan bags, 2 dotted white bags, 4 dark coral bags.
drab fuchsia bags contain 4 dull gold bags, 3 muted yellow bags, 4 muted orange bags, 4 faded fuchsia bags.
drab beige bags contain 2 plaid olive bags.
vibrant coral bags contain 3 mirrored cyan bags.
dull salmon bags contain 2 shiny gold bags.
light chartreuse bags contain 3 plaid cyan bags.
striped silver bags contain 3 shiny violet bags, 3 dark blue bags.
dark indigo bags contain 3 light beige bags, 3 wavy white bags, 2 light black bags, 4 striped silver bags.
dotted orange bags contain 2 dull bronze bags, 3 vibrant red bags, 5 dull gold bags, 3 shiny yellow bags.
dotted fuchsia bags contain 1 vibrant cyan bag, 4 dotted crimson bags.
shiny turquoise bags contain 1 dark aqua bag, 4 dark cyan bags.
posh beige bags contain 1 shiny purple bag.
shiny tan bags contain 2 bright violet bags, 5 faded orange bags, 2 mirrored cyan bags.
faded maroon bags contain 1 dark red bag, 1 mirrored red bag.
clear tomato bags contain 4 mirrored teal bags, 2 posh turquoise bags.
pale beige bags contain 2 pale salmon bags, 5 dark teal bags, 4 shiny chartreuse bags, 5 striped green bags.
dull red bags contain 1 pale plum bag.
striped salmon bags contain 4 drab cyan bags, 5 light yellow bags, 4 vibrant orange bags, 4 dark gold bags.
dull lavender bags contain 3 pale blue bags, 5 clear blue bags.
dim red bags contain 3 vibrant bronze bags, 3 dotted gray bags.
light orange bags contain 2 plaid teal bags, 2 dull brown bags, 3 dark brown bags.
dotted silver bags contain 1 vibrant yellow bag, 4 pale lime bags, 4 pale crimson bags.
mirrored gray bags contain 1 dark coral bag, 2 mirrored crimson bags, 3 light yellow bags, 5 dull crimson bags.
light black bags contain 1 drab tan bag, 3 drab lavender bags.
plaid purple bags contain 4 clear tan bags, 3 dim yellow bags.
mirrored tan bags contain 2 dark olive bags, 4 clear violet bags, 5 wavy salmon bags.
dark silver bags contain 3 shiny silver bags, 3 dark lime bags.
dark violet bags contain 3 faded violet bags, 1 dull plum bag, 1 drab silver bag, 1 pale purple bag.
drab magenta bags contain 1 dark aqua bag, 2 muted maroon bags, 5 drab green bags.
pale green bags contain 5 posh red bags, 1 light fuchsia bag, 2 dotted chartreuse bags.
mirrored beige bags contain 4 vibrant turquoise bags, 4 muted yellow bags, 5 faded cyan bags, 2 drab purple bags.
striped aqua bags contain 4 clear black bags, 3 striped indigo bags.
mirrored crimson bags contain 2 dull gold bags, 5 wavy blue bags, 2 bright plum bags, 4 shiny yellow bags.
striped crimson bags contain 3 clear blue bags.
muted lavender bags contain 1 drab coral bag, 2 dull gold bags, 2 posh crimson bags, 1 mirrored green bag.
light tomato bags contain 3 dull black bags, 5 posh white bags.
pale tan bags contain 1 clear yellow bag, 2 vibrant aqua bags, 1 wavy red bag, 2 drab chartreuse bags.
dotted plum bags contain 4 shiny tomato bags, 1 mirrored olive bag, 2 posh turquoise bags, 1 faded bronze bag.
vibrant bronze bags contain 1 vibrant aqua bag.
clear tan bags contain 5 vibrant aqua bags, 1 drab coral bag, 4 muted lavender bags, 1 muted orange bag.
dark beige bags contain 5 dull green bags, 5 clear violet bags, 1 pale coral bag, 3 pale silver bags.
wavy plum bags contain 4 light teal bags, 4 shiny aqua bags, 2 light olive bags, 4 light blue bags.
striped turquoise bags contain 2 pale salmon bags, 3 muted orange bags, 3 posh lavender bags.
mirrored turquoise bags contain 3 vibrant lavender bags.
clear gray bags contain 3 dark cyan bags, 2 mirrored red bags, 2 wavy teal bags.
wavy violet bags contain 1 dark fuchsia bag.
clear crimson bags contain 1 pale red bag.
faded purple bags contain 1 shiny black bag, 2 mirrored white bags.
bright white bags contain 5 dotted maroon bags, 1 wavy aqua bag.
pale bronze bags contain 5 dull teal bags.
bright teal bags contain 1 mirrored aqua bag, 5 drab fuchsia bags.
posh silver bags contain 5 dim gray bags, 5 vibrant beige bags, 2 muted green bags.
posh chartreuse bags contain 3 pale brown bags.
dotted purple bags contain 5 faded indigo bags, 4 drab magenta bags, 5 shiny chartreuse bags, 3 faded maroon bags.
dim fuchsia bags contain 3 light blue bags, 3 muted yellow bags.
dark coral bags contain 4 dull crimson bags, 3 muted brown bags.
faded crimson bags contain 1 muted teal bag.
mirrored orange bags contain 3 dull bronze bags, 5 dull gold bags, 4 dim gray bags, 1 dotted green bag.
faded aqua bags contain 1 light gray bag.
vibrant magenta bags contain 1 dark aqua bag.
light fuchsia bags contain 4 light orange bags, 5 muted chartreuse bags, 3 wavy tomato bags, 1 dotted violet bag.
light coral bags contain 5 plaid tan bags.
dim lavender bags contain 1 pale purple bag.
shiny gray bags contain 5 shiny purple bags, 5 vibrant green bags, 1 bright cyan bag, 5 light blue bags.
dim turquoise bags contain no other bags.
wavy turquoise bags contain 1 light white bag, 4 posh magenta bags, 5 dim magenta bags.
dim salmon bags contain 5 faded violet bags, 1 faded lime bag.
wavy bronze bags contain 4 plaid magenta bags.
clear black bags contain 1 shiny lavender bag.
striped magenta bags contain 5 shiny cyan bags, 3 dotted purple bags, 4 striped silver bags, 3 light coral bags.
striped gray bags contain 3 faded plum bags, 2 striped fuchsia bags, 1 dim gray bag.
wavy cyan bags contain 1 striped indigo bag.
faded fuchsia bags contain 2 striped fuchsia bags.
plaid blue bags contain 2 dark brown bags, 5 drab gray bags, 5 plaid olive bags, 1 dark aqua bag.
pale red bags contain 5 clear aqua bags, 2 dim turquoise bags, 5 drab gray bags, 4 faded turquoise bags.
dim tan bags contain no other bags.
wavy fuchsia bags contain 2 dull lime bags, 1 drab fuchsia bag, 3 drab indigo bags.
drab gold bags contain 4 bright salmon bags, 2 shiny fuchsia bags, 4 faded lime bags, 5 plaid magenta bags.
pale lavender bags contain 1 wavy beige bag, 2 striped olive bags.
muted olive bags contain 5 striped fuchsia bags, 1 drab silver bag, 3 dotted lavender bags.
shiny magenta bags contain 3 clear orange bags, 2 plaid silver bags, 5 bright turquoise bags, 4 shiny orange bags.
muted blue bags contain 3 dark gray bags, 3 drab blue bags, 4 dark gold bags, 5 bright tomato bags.
dotted red bags contain 4 striped plum bags, 5 shiny aqua bags, 2 clear red bags.
vibrant tomato bags contain 3 wavy white bags, 1 mirrored lime bag, 1 dark fuchsia bag.
dull silver bags contain 4 posh black bags, 3 dark gray bags, 3 pale plum bags.
dark chartreuse bags contain 3 dull blue bags, 1 dim tan bag.
clear gold bags contain 3 muted magenta bags, 3 dim teal bags, 4 vibrant olive bags, 1 vibrant salmon bag.
posh teal bags contain 4 wavy red bags.
pale blue bags contain 1 dim red bag, 4 clear silver bags, 2 dull salmon bags, 4 vibrant salmon bags.
dotted gray bags contain 4 vibrant bronze bags, 4 dark maroon bags, 4 muted lavender bags.
dotted magenta bags contain 2 dull purple bags, 4 dim gold bags, 5 drab gray bags, 4 faded bronze bags.
faded gold bags contain 2 clear black bags, 3 pale tomato bags, 3 wavy aqua bags.
light turquoise bags contain 2 bright tan bags, 2 muted chartreuse bags.
muted green bags contain 4 muted gold bags, 4 posh black bags, 1 striped fuchsia bag, 1 dotted blue bag.
light beige bags contain 5 muted olive bags.
striped brown bags contain 4 bright white bags, 1 pale teal bag.
vibrant blue bags contain 4 clear aqua bags, 2 striped green bags, 1 faded indigo bag.
dim purple bags contain 4 bright coral bags, 2 posh yellow bags.
dim aqua bags contain 3 faded plum bags, 2 dim red bags.
clear salmon bags contain 2 drab gray bags, 1 mirrored cyan bag.
plaid tan bags contain 5 muted yellow bags, 1 bright brown bag.
striped green bags contain 2 drab cyan bags, 5 dim gray bags.
dark gray bags contain 3 muted teal bags, 1 clear violet bag, 5 bright cyan bags.
clear lavender bags contain 1 dark red bag, 1 wavy blue bag, 2 plaid silver bags.
vibrant gold bags contain 5 dark brown bags.
drab indigo bags contain 3 wavy aqua bags, 3 mirrored indigo bags, 5 dull brown bags.
light white bags contain 2 dull plum bags, 2 drab orange bags.
posh orange bags contain 4 wavy plum bags, 2 posh tan bags, 1 bright blue bag, 4 muted red bags.
drab red bags contain 2 mirrored maroon bags, 4 light coral bags.
muted silver bags contain 5 muted maroon bags, 3 clear fuchsia bags, 3 dark gold bags.
plaid olive bags contain 1 posh red bag, 1 pale crimson bag, 5 shiny tomato bags.
light tan bags contain 1 dull bronze bag, 2 dim lavender bags.
plaid white bags contain 3 dim turquoise bags.
pale aqua bags contain 1 vibrant crimson bag, 3 striped silver bags, 3 bright lavender bags, 3 shiny white bags.
bright tomato bags contain 5 drab purple bags, 1 shiny black bag, 4 wavy turquoise bags.
dotted green bags contain 3 dim cyan bags, 4 faded violet bags.
faded silver bags contain 1 shiny violet bag, 5 faded lavender bags.
vibrant cyan bags contain 1 bright green bag, 4 muted teal bags, 3 clear salmon bags.
mirrored blue bags contain 2 muted teal bags, 4 posh crimson bags, 2 dim indigo bags, 1 clear black bag.
faded olive bags contain 3 faded fuchsia bags, 3 dotted maroon bags, 5 wavy red bags, 4 plaid chartreuse bags.
striped lavender bags contain 2 vibrant salmon bags, 5 bright black bags, 5 dull blue bags.
bright green bags contain 2 muted maroon bags, 3 dim orange bags.
striped teal bags contain 4 light brown bags, 5 plaid brown bags, 4 clear turquoise bags.
posh yellow bags contain 1 pale teal bag, 5 dark crimson bags.
clear cyan bags contain 1 muted silver bag, 5 shiny white bags, 4 dotted white bags, 2 striped fuchsia bags.
drab tan bags contain 3 vibrant bronze bags, 1 pale white bag.
muted chartreuse bags contain 1 clear white bag, 1 shiny violet bag, 5 bright fuchsia bags.
drab aqua bags contain 3 mirrored tan bags.
vibrant gray bags contain 2 mirrored salmon bags, 3 dotted brown bags, 3 wavy maroon bags, 4 shiny maroon bags.
faded teal bags contain 2 drab gray bags, 1 dim gold bag, 4 drab orange bags, 5 clear violet bags.
wavy red bags contain 4 drab coral bags, 4 dotted lavender bags, 5 dim turquoise bags.
dull white bags contain 3 mirrored green bags, 5 dim turquoise bags.
dotted chartreuse bags contain 1 dotted green bag, 4 dull blue bags, 1 striped indigo bag, 5 dim tomato bags.
posh maroon bags contain 2 dull salmon bags, 5 clear bronze bags, 5 bright cyan bags, 5 clear silver bags.
faded white bags contain 4 drab gray bags, 4 dim gray bags.
striped black bags contain 1 bright salmon bag, 3 faded white bags, 3 dark magenta bags, 1 muted plum bag.
striped indigo bags contain 3 shiny tomato bags, 2 mirrored olive bags.
striped white bags contain 4 vibrant maroon bags.
dim gray bags contain 2 dull gold bags.
faded coral bags contain 5 mirrored lavender bags, 2 vibrant plum bags.
mirrored tomato bags contain 5 light yellow bags, 2 drab orange bags.
dotted tan bags contain 2 posh plum bags, 2 pale teal bags, 2 pale maroon bags.
dotted turquoise bags contain 5 mirrored crimson bags, 2 dull orange bags.
dim yellow bags contain 2 bright cyan bags, 3 dim turquoise bags, 2 mirrored green bags.
vibrant crimson bags contain 5 posh maroon bags.
pale crimson bags contain 4 clear black bags, 5 dull crimson bags, 5 dotted green bags.
light indigo bags contain 3 clear black bags.
plaid cyan bags contain 3 plaid tan bags, 3 drab coral bags.
drab bronze bags contain 5 dull teal bags, 3 plaid coral bags, 2 faded beige bags, 4 plaid aqua bags.
drab orange bags contain 1 mirrored green bag.
mirrored lime bags contain 1 shiny gray bag, 3 dim indigo bags.
posh aqua bags contain 4 muted tan bags, 2 faded yellow bags.
light purple bags contain 2 shiny chartreuse bags, 2 dim gray bags, 5 pale red bags.
dull teal bags contain 3 posh crimson bags, 1 dotted blue bag, 3 muted yellow bags.
vibrant red bags contain 4 faded white bags, 5 dim tan bags, 4 shiny lavender bags, 1 dim turquoise bag.
dull cyan bags contain 1 dotted silver bag, 5 striped olive bags, 5 faded gray bags, 1 dark green bag.
dim crimson bags contain 1 posh lime bag, 1 dark salmon bag.
light violet bags contain 5 posh brown bags.
clear orange bags contain 2 light olive bags, 4 faded turquoise bags, 4 drab gray bags, 2 mirrored olive bags.
dotted crimson bags contain 4 pale magenta bags, 5 muted red bags, 4 shiny yellow bags.
posh gray bags contain 4 dull lavender bags, 4 dim gray bags.
faded tomato bags contain 3 striped salmon bags, 1 bright lime bag, 4 vibrant magenta bags.
clear bronze bags contain 5 bright plum bags, 1 dim beige bag, 1 dim cyan bag, 5 dotted blue bags.
clear fuchsia bags contain 3 vibrant olive bags, 3 pale crimson bags, 4 wavy maroon bags, 4 drab olive bags.
bright violet bags contain 3 faded blue bags.
muted brown bags contain 1 muted lavender bag.
faded turquoise bags contain 3 dull gold bags, 3 muted orange bags, 4 light blue bags, 1 dotted gray bag.
dim indigo bags contain 5 muted maroon bags.
plaid black bags contain 4 plaid teal bags, 5 vibrant green bags.
dull purple bags contain 2 shiny gold bags, 4 dim gray bags.
dull crimson bags contain 1 dull gold bag, 4 vibrant aqua bags.
light aqua bags contain 5 mirrored orange bags, 4 wavy aqua bags.
pale lime bags contain 4 drab coral bags, 3 vibrant chartreuse bags, 4 posh crimson bags.
faded plum bags contain 1 muted brown bag, 4 dull bronze bags, 1 plaid white bag, 1 drab blue bag.
clear silver bags contain 4 muted gray bags, 5 mirrored maroon bags, 1 clear violet bag.
light brown bags contain 4 shiny maroon bags, 1 drab lavender bag, 5 dark violet bags, 4 dull green bags.
light crimson bags contain 4 light magenta bags, 3 mirrored blue bags, 1 pale tomato bag, 1 muted tomato bag.
plaid orange bags contain 4 dull silver bags.
muted black bags contain 2 dull tomato bags, 5 mirrored teal bags.
dotted bronze bags contain 4 dim tan bags.
drab tomato bags contain 4 muted lime bags, 2 striped cyan bags.
clear indigo bags contain 5 dull lavender bags, 4 dark indigo bags.
pale purple bags contain 5 dim beige bags, 5 shiny tomato bags, 3 mirrored olive bags, 5 muted lavender bags.
mirrored silver bags contain 4 vibrant maroon bags.
bright aqua bags contain 5 bright olive bags, 2 drab magenta bags, 2 dim teal bags.
wavy magenta bags contain 3 clear fuchsia bags, 3 mirrored gray bags, 4 dull fuchsia bags.
dull blue bags contain 5 drab coral bags, 5 drab chartreuse bags.
dim plum bags contain 1 muted magenta bag, 3 shiny lavender bags.
muted bronze bags contain 3 posh white bags, 5 clear black bags, 3 mirrored lime bags.
drab cyan bags contain 1 drab blue bag.
faded tan bags contain 4 pale plum bags.
posh violet bags contain 2 dim silver bags.
posh blue bags contain 5 clear yellow bags, 3 light indigo bags.
muted orange bags contain 5 drab gray bags, 1 dim turquoise bag.
bright lavender bags contain 1 drab cyan bag.
clear brown bags contain 2 shiny teal bags.
light maroon bags contain 4 dim fuchsia bags, 1 light yellow bag, 3 pale magenta bags.
muted indigo bags contain 4 shiny gold bags, 1 clear teal bag, 4 light gray bags, 2 shiny orange bags.
striped red bags contain 4 wavy blue bags, 1 vibrant maroon bag, 5 shiny yellow bags.
drab olive bags contain 2 dull blue bags, 5 pale coral bags, 1 vibrant salmon bag, 1 dotted green bag.
dotted aqua bags contain 5 dim aqua bags, 1 drab olive bag, 5 dim violet bags, 2 light plum bags.
dull indigo bags contain 5 vibrant gold bags.
drab turquoise bags contain 3 pale salmon bags, 1 shiny violet bag, 1 shiny orange bag, 1 mirrored olive bag.
bright turquoise bags contain 1 dotted green bag.
bright tan bags contain 5 faded cyan bags, 5 mirrored aqua bags, 3 dim orange bags.
bright chartreuse bags contain 1 dim bronze bag, 3 posh bronze bags, 3 drab salmon bags.
vibrant orange bags contain 3 dim fuchsia bags, 3 dull crimson bags, 5 vibrant salmon bags.
bright lime bags contain 3 posh tomato bags, 4 striped indigo bags, 1 dull white bag, 2 light plum bags.
dark black bags contain 1 muted aqua bag.
pale silver bags contain 2 dull fuchsia bags, 2 dark maroon bags.
dotted maroon bags contain 2 drab olive bags.
shiny gold bags contain 2 dim beige bags, 1 dark maroon bag, 4 light blue bags.
posh lime bags contain 1 shiny green bag, 3 drab purple bags, 3 vibrant blue bags.
vibrant violet bags contain 5 dim silver bags, 4 dotted maroon bags, 5 drab fuchsia bags, 5 clear plum bags.
bright silver bags contain 2 drab coral bags, 5 mirrored red bags, 5 drab fuchsia bags.
dark purple bags contain 1 drab chartreuse bag, 1 posh lavender bag, 1 clear blue bag.
light green bags contain 1 dark plum bag, 5 dull olive bags, 4 shiny lavender bags.
dull beige bags contain 5 light indigo bags.
muted gold bags contain 2 mirrored magenta bags, 5 shiny orange bags, 5 drab lavender bags.
plaid gold bags contain 4 dark crimson bags, 3 dotted crimson bags.
plaid silver bags contain 2 dotted blue bags, 1 vibrant aqua bag, 2 shiny chartreuse bags.
vibrant green bags contain 5 posh brown bags, 3 light gray bags, 2 wavy blue bags.
posh crimson bags contain 2 dim turquoise bags, 3 dim tan bags, 4 dotted lavender bags.
bright coral bags contain 1 faded chartreuse bag.
shiny teal bags contain 2 muted orange bags, 5 muted olive bags, 5 mirrored olive bags.
posh brown bags contain 4 posh crimson bags.
pale white bags contain 5 dark coral bags, 3 dim tomato bags, 3 wavy indigo bags.
clear olive bags contain 1 bright plum bag.
dotted violet bags contain 3 posh plum bags.
vibrant salmon bags contain 3 dim beige bags, 2 light gray bags, 2 wavy red bags, 5 dull brown bags.
dotted indigo bags contain 1 dull maroon bag.
clear lime bags contain 5 posh maroon bags, 1 muted coral bag, 5 wavy maroon bags, 3 muted orange bags.
posh cyan bags contain 3 posh black bags, 4 drab black bags.
striped blue bags contain 5 dim yellow bags, 1 wavy chartreuse bag.
dark cyan bags contain 1 faded blue bag.
clear magenta bags contain 3 muted green bags, 5 dotted aqua bags, 2 posh gray bags.
dull lime bags contain 4 dotted lavender bags, 3 dim cyan bags, 4 dim tan bags.
pale brown bags contain 3 dim gray bags.
dull violet bags contain 2 posh tomato bags, 2 clear blue bags, 2 drab silver bags, 4 muted gray bags.
dark tan bags contain 2 dim cyan bags, 4 dotted lavender bags.
dotted black bags contain 3 plaid olive bags, 3 posh plum bags, 3 wavy turquoise bags, 5 muted teal bags.
muted cyan bags contain 2 shiny tan bags, 1 bright aqua bag, 4 dotted lavender bags, 3 vibrant crimson bags.
clear green bags contain 1 dotted violet bag, 3 dotted bronze bags, 1 clear bronze bag.
bright olive bags contain 4 muted orange bags, 3 dotted orange bags.
dull turquoise bags contain 1 faded lavender bag, 5 dark blue bags, 3 striped cyan bags.
mirrored plum bags contain 5 dull violet bags, 3 faded turquoise bags.
plaid lavender bags contain 2 striped green bags, 2 posh magenta bags, 3 drab cyan bags, 3 bright plum bags.
clear yellow bags contain 1 mirrored green bag, 2 dotted blue bags.
light gold bags contain 3 dark blue bags.
dark gold bags contain 1 light aqua bag.
drab crimson bags contain 2 posh coral bags, 1 shiny red bag.
faded chartreuse bags contain 2 vibrant red bags, 4 vibrant aqua bags, 5 pale purple bags, 5 mirrored olive bags.
bright plum bags contain 2 pale tan bags.
muted crimson bags contain 3 dotted orange bags, 4 bright orange bags, 3 drab maroon bags, 2 vibrant turquoise bags.
dim black bags contain 3 shiny green bags, 5 mirrored gold bags, 2 wavy fuchsia bags.
pale gold bags contain 2 wavy silver bags, 3 muted magenta bags.
wavy black bags contain 2 dim beige bags, 1 clear bronze bag, 5 shiny gray bags.
dim green bags contain 1 wavy maroon bag.
dull tomato bags contain 4 mirrored red bags, 1 dark violet bag, 2 posh magenta bags, 1 light indigo bag.
clear beige bags contain 1 posh coral bag, 4 dim silver bags, 1 wavy turquoise bag, 4 bright white bags.
posh red bags contain 5 dim cyan bags.
dark turquoise bags contain 1 dark cyan bag, 3 light blue bags.
clear maroon bags contain 2 mirrored white bags, 5 dull plum bags, 3 dull beige bags.
light silver bags contain 4 shiny violet bags, 4 posh indigo bags, 1 wavy white bag.
muted salmon bags contain 3 dim lime bags, 2 shiny violet bags, 2 dark green bags, 1 mirrored chartreuse bag.
muted plum bags contain 3 bright coral bags, 5 posh indigo bags, 4 bright gray bags.
dim orange bags contain 5 mirrored brown bags, 4 dim turquoise bags.
light gray bags contain 2 light blue bags, 2 pale purple bags.
mirrored magenta bags contain 5 pale coral bags, 1 dark crimson bag.
drab lavender bags contain 3 clear yellow bags.
striped tan bags contain 1 dotted black bag, 1 dull crimson bag.
wavy aqua bags contain 1 muted teal bag.
light olive bags contain 4 drab magenta bags.
bright indigo bags contain 1 mirrored gray bag, 4 vibrant red bags, 3 dim tomato bags.
dotted yellow bags contain 1 drab olive bag, 4 pale crimson bags, 4 drab gray bags, 2 striped fuchsia bags.
mirrored lavender bags contain 3 drab coral bags, 3 dim indigo bags, 4 dim gold bags, 5 wavy salmon bags.
muted white bags contain 5 bright brown bags, 5 bright plum bags, 1 dull gold bag.
posh fuchsia bags contain 3 dotted aqua bags.
dotted brown bags contain 4 dim turquoise bags, 1 dotted gray bag, 3 dark magenta bags, 2 bright coral bags.
shiny bronze bags contain 4 mirrored indigo bags, 2 wavy turquoise bags, 2 wavy blue bags, 3 mirrored beige bags.
vibrant teal bags contain 1 dark violet bag, 3 wavy blue bags, 1 dull fuchsia bag.
plaid indigo bags contain 4 vibrant magenta bags, 2 dull cyan bags.
muted turquoise bags contain 5 dark magenta bags, 5 drab gray bags, 4 plaid red bags.
striped bronze bags contain 5 bright white bags, 2 clear bronze bags, 3 bright silver bags.
posh salmon bags contain 4 drab maroon bags, 3 mirrored bronze bags, 4 faded plum bags.
light magenta bags contain 5 dark purple bags, 3 plaid silver bags.
dull fuchsia bags contain 3 posh red bags, 4 dark coral bags, 2 dark aqua bags.
vibrant aqua bags contain 3 drab coral bags, 3 dim cyan bags, 5 dim tan bags.
muted red bags contain 3 plaid teal bags, 1 posh coral bag, 3 posh plum bags.
drab yellow bags contain 3 bright brown bags, 3 mirrored aqua bags.
dim cyan bags contain no other bags.
shiny yellow bags contain 4 wavy red bags, 2 dotted blue bags.
bright maroon bags contain 4 drab gray bags, 1 mirrored olive bag, 5 faded white bags.
dark crimson bags contain 4 drab orange bags, 5 vibrant red bags, 1 pale purple bag.
shiny cyan bags contain 4 faded plum bags, 4 faded teal bags, 1 posh indigo bag.
posh olive bags contain 1 dark tan bag, 1 drab green bag, 5 pale cyan bags, 4 vibrant turquoise bags.
dull chartreuse bags contain 3 shiny chartreuse bags, 3 striped brown bags, 2 mirrored blue bags, 3 pale coral bags.
dim bronze bags contain 4 muted olive bags.
faded orange bags contain 2 vibrant red bags.
dim violet bags contain 1 posh red bag, 5 plaid tan bags.
wavy indigo bags contain 2 bright olive bags, 3 shiny red bags, 4 clear blue bags.
dull coral bags contain 4 faded magenta bags, 1 plaid lime bag, 2 dotted red bags.
dotted white bags contain 2 mirrored purple bags, 4 faded cyan bags, 1 vibrant salmon bag.
shiny crimson bags contain 5 mirrored magenta bags, 2 plaid silver bags, 3 vibrant brown bags, 2 vibrant orange bags.
bright magenta bags contain 1 light silver bag, 1 striped salmon bag, 4 dark gold bags, 5 faded lime bags.
dotted salmon bags contain 5 dim purple bags, 4 dull indigo bags, 2 pale turquoise bags.
clear purple bags contain 2 clear coral bags, 2 muted green bags, 5 clear maroon bags.
mirrored purple bags contain 4 drab silver bags, 1 wavy aqua bag, 1 shiny teal bag.
wavy teal bags contain 5 dull salmon bags, 2 bright coral bags, 2 bright plum bags.
shiny red bags contain 4 dull indigo bags, 4 pale coral bags, 3 wavy blue bags.
wavy tan bags contain 5 faded turquoise bags, 2 posh tomato bags, 4 dark green bags, 4 dull crimson bags.
wavy crimson bags contain 3 vibrant gold bags, 3 drab magenta bags, 3 dull salmon bags.
wavy olive bags contain 2 pale blue bags, 1 dull gold bag, 3 clear aqua bags, 1 mirrored gray bag.
shiny salmon bags contain 2 mirrored aqua bags, 3 mirrored tan bags, 1 wavy blue bag.
dark plum bags contain 1 faded salmon bag, 1 faded plum bag, 3 pale tan bags.
mirrored yellow bags contain 3 clear lime bags.
dark lavender bags contain 5 muted teal bags, 5 shiny bronze bags.
pale tomato bags contain 2 clear silver bags, 3 shiny green bags, 2 mirrored blue bags, 4 vibrant beige bags.
dotted cyan bags contain 4 light gray bags.
wavy silver bags contain 4 drab teal bags, 5 vibrant maroon bags, 4 wavy teal bags, 4 striped turquoise bags.
vibrant brown bags contain 5 striped gray bags, 1 bright turquoise bag.
mirrored salmon bags contain 1 bright salmon bag, 4 drab lavender bags.
striped violet bags contain 5 drab teal bags.
bright gold bags contain 4 clear blue bags, 2 dull gray bags, 1 striped red bag, 5 muted indigo bags.
faded cyan bags contain 5 dark green bags.
plaid fuchsia bags contain 2 posh blue bags.
posh green bags contain 4 striped cyan bags, 2 bright lime bags, 1 dotted black bag, 5 dim silver bags.
dull plum bags contain 4 striped fuchsia bags.
dull brown bags contain 1 faded bronze bag, 5 posh tomato bags, 1 muted gray bag.
dull aqua bags contain 1 light blue bag, 1 vibrant bronze bag, 1 posh brown bag.
clear plum bags contain 4 clear silver bags, 2 bright beige bags, 5 mirrored red bags, 2 dull magenta bags.
dull orange bags contain 1 light blue bag, 5 shiny maroon bags.
wavy maroon bags contain 3 dotted gray bags, 3 faded indigo bags, 3 dim cyan bags.
plaid teal bags contain 2 dotted blue bags, 5 vibrant olive bags, 5 faded orange bags.
muted gray bags contain 1 dim tan bag, 1 shiny tomato bag, 3 vibrant bronze bags, 1 drab coral bag.
plaid aqua bags contain 3 mirrored tan bags, 2 mirrored green bags, 2 dark gray bags, 4 dotted blue bags.
striped beige bags contain 4 clear salmon bags.
faded beige bags contain 4 vibrant red bags, 3 pale tan bags.
pale salmon bags contain 3 mirrored chartreuse bags, 3 striped salmon bags, 4 faded blue bags.
plaid turquoise bags contain 3 shiny lavender bags, 3 faded beige bags.
muted fuchsia bags contain 3 muted indigo bags, 3 vibrant red bags, 4 dim lavender bags, 4 dull teal bags.
drab black bags contain 5 dark beige bags, 3 mirrored olive bags, 3 faded turquoise bags.
shiny fuchsia bags contain 3 muted brown bags, 4 dim beige bags.
shiny maroon bags contain 2 dark bronze bags, 2 bright salmon bags, 5 striped cyan bags.
shiny lavender bags contain 3 muted orange bags, 1 bright plum bag, 5 muted lavender bags.
bright gray bags contain 1 plaid tan bag, 2 dotted gray bags.
striped purple bags contain 5 posh black bags, 2 striped fuchsia bags, 3 mirrored magenta bags, 3 dark tan bags.
faded red bags contain 5 posh coral bags, 3 dim silver bags, 2 bright black bags, 3 muted green bags.
dim blue bags contain 5 drab purple bags.
dotted gold bags contain 5 pale coral bags, 5 dim bronze bags.
bright crimson bags contain 2 clear purple bags, 2 plaid yellow bags, 4 muted fuchsia bags.
dull gold bags contain no other bags.
mirrored teal bags contain 4 wavy maroon bags, 1 faded magenta bag, 2 wavy teal bags, 2 vibrant salmon bags.
dotted lavender bags contain no other bags.
muted aqua bags contain 4 muted tan bags.
vibrant black bags contain 3 plaid white bags.
pale maroon bags contain 3 dotted cyan bags, 4 posh brown bags, 1 bright salmon bag.
dark maroon bags contain 1 shiny tomato bag, 2 mirrored white bags, 2 posh red bags.
pale magenta bags contain 4 vibrant red bags, 3 bright cyan bags.
posh lavender bags contain 5 dim silver bags, 3 striped indigo bags, 3 muted gray bags, 3 dull violet bags.
striped chartreuse bags contain 2 shiny chartreuse bags, 5 drab gray bags, 2 dotted brown bags, 1 plaid coral bag.
muted teal bags contain 5 clear black bags, 1 light white bag, 4 posh crimson bags, 4 faded beige bags.
mirrored chartreuse bags contain 1 bright silver bag, 1 light plum bag, 2 drab purple bags.
dim lime bags contain 1 dotted gray bag, 4 muted olive bags, 2 muted gray bags.
drab violet bags contain 1 plaid fuchsia bag, 4 dull white bags, 3 posh beige bags.
bright fuchsia bags contain 1 pale turquoise bag, 5 dotted cyan bags.
striped lime bags contain 3 light blue bags, 4 drab fuchsia bags, 5 light aqua bags, 1 dim indigo bag.
wavy lavender bags contain 4 dull violet bags.
drab maroon bags contain 1 pale brown bag, 1 pale purple bag.
clear chartreuse bags contain 4 faded fuchsia bags, 2 light gray bags, 3 vibrant maroon bags, 3 posh lavender bags.
clear teal bags contain 1 faded teal bag, 4 muted white bags.
dull black bags contain 1 pale blue bag, 2 shiny green bags, 3 plaid plum bags, 2 faded turquoise bags.
dark olive bags contain 1 faded tan bag, 3 dim beige bags, 4 dark chartreuse bags, 5 light yellow bags.
faded green bags contain 4 striped green bags, 5 dotted blue bags, 3 striped beige bags.
drab green bags contain 1 clear aqua bag, 4 light plum bags.
mirrored green bags contain no other bags.
posh black bags contain 4 striped cyan bags, 2 dim tan bags, 5 drab blue bags, 5 faded white bags.
muted magenta bags contain 2 vibrant aqua bags.
mirrored brown bags contain 4 wavy turquoise bags, 1 dull magenta bag, 1 dim silver bag, 2 dim gray bags.
plaid brown bags contain 5 mirrored brown bags, 4 mirrored lime bags, 1 clear red bag.
posh white bags contain 5 clear bronze bags, 5 faded maroon bags, 3 light lavender bags.
posh turquoise bags contain 1 pale tan bag, 1 dark purple bag, 4 shiny white bags, 2 drab brown bags.
dim brown bags contain 2 drab coral bags.
plaid violet bags contain 4 clear lavender bags, 4 drab maroon bags, 4 muted maroon bags, 1 bright red bag.
posh coral bags contain 1 shiny gold bag, 4 dim red bags, 5 dull aqua bags.
bright black bags contain 2 dull teal bags.
plaid bronze bags contain 1 bright orange bag, 5 wavy turquoise bags, 5 vibrant beige bags.
drab plum bags contain 2 bright lime bags.
shiny green bags contain 5 wavy blue bags, 4 bright lime bags.
drab teal bags contain 1 wavy aqua bag, 2 mirrored gray bags, 5 dim lavender bags.
bright blue bags contain 4 muted purple bags, 3 bright fuchsia bags, 5 muted maroon bags.
shiny chartreuse bags contain 2 clear violet bags, 3 posh coral bags, 2 drab chartreuse bags, 2 pale silver bags.
faded lavender bags contain 5 dim lavender bags, 1 dim turquoise bag, 1 vibrant magenta bag.
dim coral bags contain 3 faded teal bags, 3 faded indigo bags.
striped maroon bags contain 1 shiny aqua bag, 3 vibrant magenta bags, 5 light maroon bags, 2 dull aqua bags.
striped plum bags contain 1 dotted brown bag, 3 wavy green bags, 2 mirrored tomato bags.
drab lime bags contain 2 wavy teal bags, 3 dim maroon bags, 1 dark cyan bag.
muted coral bags contain 4 dim maroon bags, 5 drab lavender bags, 5 drab purple bags.
drab white bags contain 3 shiny cyan bags, 5 wavy aqua bags, 5 faded maroon bags.
dotted teal bags contain 3 muted indigo bags.
plaid coral bags contain 4 dotted aqua bags, 4 wavy salmon bags, 2 dim maroon bags.
bright salmon bags contain 5 dark cyan bags.
shiny blue bags contain 1 posh lime bag.
plaid red bags contain 1 dim maroon bag, 4 faded crimson bags, 2 muted plum bags.
dull olive bags contain 2 faded plum bags, 4 striped white bags, 4 wavy indigo bags.
shiny purple bags contain 2 drab coral bags, 5 pale blue bags.
striped olive bags contain 2 vibrant orange bags, 5 dim red bags, 1 dim cyan bag, 3 mirrored cyan bags.
dull magenta bags contain 2 vibrant yellow bags.
dull tan bags contain 2 mirrored green bags, 5 muted yellow bags, 4 faded turquoise bags.
vibrant plum bags contain 3 shiny olive bags, 1 dim indigo bag.
mirrored black bags contain 3 posh black bags, 4 vibrant tan bags, 1 vibrant black bag, 2 posh orange bags.
shiny black bags contain 3 muted white bags, 1 dim maroon bag, 2 dull salmon bags.
clear red bags contain 4 muted gray bags.
striped cyan bags contain 4 posh chartreuse bags, 4 dull brown bags, 2 posh tomato bags, 3 dark crimson bags.
faded violet bags contain 1 drab chartreuse bag, 1 dim turquoise bag, 2 mirrored olive bags, 2 clear tan bags.
muted beige bags contain 2 bright silver bags, 5 bright gold bags, 4 pale brown bags, 2 bright bronze bags.
pale black bags contain 5 vibrant green bags, 3 dark coral bags.
vibrant purple bags contain 4 dark brown bags, 3 clear violet bags, 1 wavy black bag, 2 faded fuchsia bags.
dark fuchsia bags contain 1 wavy salmon bag.
dark aqua bags contain 5 vibrant aqua bags, 5 dull blue bags.
pale coral bags contain 3 mirrored olive bags, 5 faded blue bags, 3 dim beige bags.
striped coral bags contain 4 shiny fuchsia bags, 1 plaid brown bag, 2 bright turquoise bags, 1 vibrant blue bag.
pale turquoise bags contain 3 dull green bags, 1 dim red bag.
pale teal bags contain 3 mirrored green bags, 1 faded violet bag, 3 vibrant green bags.
wavy beige bags contain 1 bright tomato bag, 2 dull olive bags, 3 dotted violet bags.
dark orange bags contain 2 posh salmon bags, 1 clear bronze bag.
shiny tomato bags contain 5 drab orange bags, 3 dull crimson bags, 4 clear tan bags, 5 faded blue bags.
mirrored fuchsia bags contain 2 bright maroon bags, 2 dim beige bags, 3 muted gold bags, 4 striped brown bags.
clear coral bags contain 5 dim brown bags, 1 drab lavender bag, 3 dull lime bags.
clear white bags contain 2 clear violet bags, 5 dull beige bags, 3 vibrant aqua bags, 4 dull blue bags.
dull maroon bags contain 5 dim salmon bags, 4 dim silver bags, 3 dark magenta bags.
drab silver bags contain 5 faded blue bags, 5 wavy chartreuse bags, 5 dull crimson bags, 5 muted yellow bags.
faded salmon bags contain 4 wavy olive bags, 3 mirrored salmon bags, 1 plaid violet bag.
drab salmon bags contain 4 dull magenta bags, 5 muted teal bags.
light yellow bags contain 1 pale coral bag, 4 dim turquoise bags, 4 mirrored maroon bags.
plaid crimson bags contain 3 dark violet bags, 2 dull gray bags.
dark tomato bags contain 1 posh teal bag, 1 posh lavender bag, 5 dim cyan bags, 4 light yellow bags.
dim chartreuse bags contain 5 muted plum bags, 4 vibrant aqua bags.
mirrored white bags contain 5 dull gold bags, 5 muted lavender bags, 2 dull crimson bags.
dotted blue bags contain 3 muted orange bags.
mirrored olive bags contain 5 posh crimson bags, 3 faded blue bags.
dim maroon bags contain 5 wavy aqua bags, 5 faded violet bags, 2 dull crimson bags, 2 posh lavender bags.
shiny indigo bags contain 5 dull lavender bags, 1 light white bag.
wavy chartreuse bags contain 3 mirrored white bags, 2 drab chartreuse bags, 5 muted orange bags, 4 dull crimson bags.
striped orange bags contain 4 shiny salmon bags.
dull green bags contain 4 muted gray bags, 4 drab gray bags, 3 clear yellow bags.
pale orange bags contain 5 posh turquoise bags, 3 light beige bags, 3 bright aqua bags, 5 dim bronze bags.
dim tomato bags contain 3 bright brown bags.
dull bronze bags contain 1 bright plum bag, 3 wavy red bags, 2 drab silver bags.
wavy blue bags contain 3 dull crimson bags, 4 light blue bags.
clear blue bags contain 1 dim gold bag, 4 dark crimson bags, 2 light gray bags, 4 muted olive bags.
clear turquoise bags contain 1 muted lime bag, 2 faded turquoise bags, 4 plaid lavender bags.
dark brown bags contain 3 dull gold bags, 5 bright cyan bags, 2 dull brown bags, 3 dark aqua bags.
plaid lime bags contain 3 dotted purple bags, 1 plaid blue bag, 3 bright silver bags, 1 vibrant chartreuse bag.
mirrored coral bags contain 2 plaid olive bags.
vibrant fuchsia bags contain 3 light indigo bags.
dim beige bags contain 1 muted lavender bag, 3 light blue bags.
wavy orange bags contain 5 dotted teal bags, 3 dull magenta bags, 4 clear chartreuse bags, 5 shiny violet bags.
vibrant lavender bags contain 3 vibrant orange bags, 1 dark aqua bag.
mirrored aqua bags contain 4 drab blue bags.
faded gray bags contain 1 wavy blue bag, 2 vibrant yellow bags, 1 light magenta bag.
dark green bags contain 2 wavy red bags.
dark red bags contain 5 drab magenta bags, 3 bright lime bags.
dark salmon bags contain 2 striped indigo bags, 5 wavy lavender bags, 1 dim fuchsia bag, 5 dim yellow bags.
wavy lime bags contain 2 striped plum bags, 3 faded brown bags.
muted violet bags contain 1 faded tomato bag.
faded bronze bags contain 2 dim gray bags, 3 muted gray bags.
vibrant beige bags contain 5 striped brown bags, 5 dull lime bags.
dotted coral bags contain 4 shiny brown bags, 1 bright silver bag, 2 clear yellow bags.
plaid maroon bags contain 3 shiny magenta bags, 3 faded tomato bags.
dim olive bags contain 3 light brown bags.
pale plum bags contain 4 pale tan bags, 1 drab silver bag, 3 dim beige bags.
vibrant chartreuse bags contain 4 mirrored white bags, 2 muted orange bags, 2 posh magenta bags.
faded indigo bags contain 3 bright brown bags, 3 dim tomato bags.
posh gold bags contain 3 dark silver bags, 4 mirrored gray bags, 4 dark salmon bags, 1 dim white bag.
light lavender bags contain 2 dark cyan bags.
plaid salmon bags contain 2 dotted green bags, 4 shiny indigo bags, 5 bright brown bags.
wavy white bags contain 2 dim lavender bags, 3 faded teal bags, 2 dull tan bags, 3 drab orange bags.
plaid plum bags contain 1 vibrant yellow bag.
posh tan bags contain 2 dull orange bags, 4 pale violet bags, 2 shiny brown bags.
light red bags contain 4 dim maroon bags, 4 faded salmon bags, 5 plaid purple bags.
dotted beige bags contain 2 shiny fuchsia bags, 3 faded cyan bags, 5 mirrored red bags, 3 drab turquoise bags.
drab purple bags contain 3 bright cyan bags, 1 faded bronze bag, 3 light plum bags, 1 dull fuchsia bag.
bright brown bags contain 2 dotted green bags, 4 clear tan bags, 3 wavy red bags.)";

constexpr char input8[] = R"(jmp +323
acc +0
acc -1
acc +18
jmp +601
nop +531
acc +7
acc +46
jmp +351
acc +2
jmp +532
acc +20
acc +15
acc -7
acc +27
jmp +304
acc +28
acc +14
jmp +593
nop +448
acc -2
jmp +508
acc +25
acc +25
jmp +1
jmp +442
acc +31
acc -12
acc +45
jmp +1
jmp +174
nop +292
jmp +93
acc +29
acc +46
acc +23
acc -5
jmp +446
acc +36
jmp +115
acc +27
nop +186
jmp +425
jmp +390
acc -9
nop +560
acc +2
jmp +255
acc -17
acc +48
jmp +131
acc +37
acc +6
acc +0
acc +0
jmp +539
acc +41
acc +2
acc +45
acc +0
jmp +291
jmp +525
acc -2
acc +46
acc -11
jmp +381
acc +17
acc +7
jmp +215
acc -13
acc +4
jmp +1
acc +50
jmp -40
acc -10
acc +38
jmp +256
acc +31
acc +5
acc +1
acc +40
jmp -20
acc +26
acc +29
nop +248
nop +394
jmp +169
acc +15
acc -1
jmp +1
acc -11
jmp +99
acc -12
nop +485
nop -2
jmp +200
acc +7
acc +23
acc +43
acc +49
jmp +245
acc +6
acc +36
jmp +1
nop +386
jmp +130
acc +4
acc +12
acc +33
nop +443
jmp +185
acc -7
jmp -72
acc +5
acc +24
acc -9
jmp -76
jmp +286
acc +50
acc +20
jmp -80
acc +27
jmp +41
nop +465
jmp +221
jmp +1
acc +9
acc +9
acc +0
jmp -18
acc +42
nop +171
acc +36
jmp +57
acc +25
jmp +1
jmp +248
acc -1
acc +11
nop -22
jmp +169
acc -10
acc -5
jmp +274
jmp +375
jmp -94
acc -17
acc +32
nop +175
acc +35
jmp +302
jmp -34
acc +0
jmp +58
acc +30
acc +20
acc +3
acc +9
jmp -125
acc +41
acc +24
acc +6
jmp -129
acc +32
acc +32
acc +28
acc +2
jmp -148
acc +5
nop -129
acc -18
acc +21
jmp +422
acc +5
acc +21
acc +17
jmp +112
jmp +401
acc +32
jmp +192
jmp -26
acc +7
acc +23
nop +284
acc -18
jmp +426
acc +19
acc -5
acc -10
jmp -88
nop +339
acc -2
jmp -11
acc +1
acc +26
acc +3
acc +47
jmp +98
acc -3
jmp +124
acc +28
acc +10
acc +45
jmp +410
acc -17
acc +17
acc -4
jmp +1
jmp +238
jmp +1
jmp +85
nop +214
jmp -151
jmp -40
acc +38
jmp -123
acc +23
acc +46
acc +29
jmp +56
jmp +89
jmp -76
nop -97
acc +42
acc +40
jmp -181
jmp -165
acc +5
acc +36
acc +19
jmp +106
acc +43
acc +48
acc +26
jmp -109
acc +48
acc +15
jmp +315
acc +18
jmp +164
jmp -26
acc +18
acc +6
acc +18
jmp -119
jmp +1
jmp +233
acc +4
acc +32
acc +46
jmp -168
jmp +255
acc +13
acc +4
jmp +236
acc +2
jmp -16
acc +31
jmp +155
jmp -8
acc +35
acc +15
jmp -211
jmp +77
jmp -163
acc +24
jmp +1
acc +15
nop +77
jmp +291
acc -3
acc +7
acc +42
acc +7
jmp +314
acc +2
acc +4
jmp -66
acc +9
acc -4
acc +49
acc +28
jmp -7
jmp +174
acc +3
acc -19
acc +15
jmp -4
acc +36
jmp +289
nop +219
acc +36
acc -13
acc +11
jmp -143
acc +29
acc +32
acc +8
jmp +283
acc +41
acc +24
jmp -103
acc +43
jmp +110
acc -18
acc +14
nop -255
acc -1
jmp -110
acc +31
acc +47
nop +179
nop +266
jmp +185
acc -7
acc -6
acc -16
acc +12
jmp +10
acc +12
jmp +1
jmp -76
jmp +278
jmp +118
acc +30
acc +4
acc -4
jmp +9
jmp +191
acc +9
acc +23
jmp -133
jmp -69
acc +42
acc +16
jmp +276
acc +12
acc +49
jmp +275
jmp +159
jmp +1
acc +42
jmp -14
acc -16
jmp +234
jmp +107
acc +35
acc +39
nop +36
acc +6
jmp -216
acc +36
acc +40
jmp -133
acc +26
nop -210
acc +46
jmp +1
jmp -13
acc -4
acc +19
nop +208
acc +27
jmp +237
nop +205
acc +35
jmp +59
jmp +219
acc +16
acc +18
jmp -249
jmp +1
acc +30
acc +7
jmp -220
acc +12
jmp -5
acc +42
acc +30
acc +33
jmp -121
acc +47
acc -7
jmp +42
jmp -7
jmp -334
jmp -360
acc +0
acc +50
jmp -297
jmp -4
nop -51
nop -291
acc +47
jmp -119
acc -19
acc +12
jmp +98
acc +19
acc +10
acc +32
acc +0
jmp +146
acc +6
acc -12
acc +18
acc +9
jmp +26
acc +10
acc +1
acc +24
acc +11
jmp +61
acc +20
jmp -273
acc +47
jmp +144
acc -7
acc +27
jmp +123
acc +50
acc -8
nop -182
acc -15
jmp -290
acc -15
nop -151
acc +23
acc +45
jmp +93
acc +32
acc +39
jmp -254
acc +47
acc +2
acc +5
acc -5
jmp +92
acc -5
nop -428
jmp +66
acc +44
nop -325
nop +47
jmp +35
jmp +1
acc +46
acc +42
acc +11
jmp -117
acc +14
jmp -340
jmp +117
acc +3
nop -179
nop -65
jmp -161
nop -174
acc +18
jmp +172
acc +44
acc +28
jmp -91
jmp -362
acc +46
acc +17
jmp +139
acc +50
acc +23
jmp -92
acc +0
acc +12
jmp -136
acc +30
acc -15
jmp -285
acc +42
acc +11
jmp -361
nop +57
acc -11
jmp -216
jmp +8
acc +18
jmp -418
acc -8
acc +31
nop -4
nop -31
jmp -423
acc +20
jmp -264
acc -7
acc +11
jmp -349
jmp -22
nop +46
jmp +103
acc -9
nop -58
acc +41
jmp -134
nop -50
acc +12
acc +13
jmp -169
jmp -495
nop -74
jmp -383
acc +48
nop -306
acc +23
acc +10
jmp -315
acc +7
nop -342
acc +23
acc +28
jmp -23
jmp -297
acc +47
jmp -131
acc -11
acc +29
jmp +1
jmp -62
acc +32
acc +26
jmp -205
acc +34
acc +43
nop -309
acc +37
jmp -528
nop +54
jmp -149
acc -13
jmp -262
acc +2
nop -394
acc +45
jmp -116
acc +13
acc +0
acc +6
acc +45
jmp -464
jmp -343
jmp -414
acc -5
acc +10
jmp +62
acc -1
nop -313
acc +35
acc +49
jmp -435
acc +1
acc +7
jmp -50
nop -415
acc +9
acc +22
jmp -168
nop -559
jmp -367
nop -141
jmp -142
jmp -370
nop -74
acc +2
acc -19
jmp -498
acc +47
acc +48
acc +27
acc +41
jmp -182
jmp -219
acc +31
jmp -128
acc +44
acc +18
acc +17
jmp -36
jmp -182
jmp +35
jmp -184
jmp +1
acc +15
jmp -239
acc +19
nop -50
jmp -103
acc +27
acc +44
jmp -8
acc +5
acc +36
jmp -213
acc -2
acc +50
nop -337
jmp -252
jmp -163
acc -9
jmp -433
acc +2
acc +22
acc -19
jmp -469
jmp -45
jmp -18
acc +36
acc +6
acc +38
jmp -475
nop -281
acc +36
nop -575
jmp -292
acc -11
acc +30
nop -572
acc +21
jmp -235
acc +3
acc -16
acc +8
acc -9
jmp -246
acc +3
acc +50
jmp +1
acc +49
jmp +1)";

constexpr char input9[] = R"(1
15
32
16
6
20
25
30
38
31
48
47
19
23
39
50
41
4
27
12
21
24
26
43
2
3
5
7
8
9
6
72
10
20
11
13
14
30
25
23
15
16
17
18
19
22
21
12
32
24
28
26
27
35
29
31
33
34
36
37
38
42
39
30
40
43
41
47
46
44
50
49
45
75
51
53
57
56
81
59
83
70
64
72
67
91
69
71
73
84
85
92
89
90
93
96
94
98
123
104
120
154
115
126
141
133
131
157
139
287
238
209
144
158
175
185
179
182
183
187
190
192
286
289
264
257
241
256
259
466
270
275
283
324
462
302
323
331
333
362
361
372
365
370
377
524
475
497
498
521
844
500
515
529
545
553
558
585
1013
887
1210
654
995
694
735
876
872
894
747
906
1060
972
1607
998
1268
1247
1292
1199
1074
1239
1111
1768
1696
1348
1389
1401
1429
1611
1441
1870
1619
1641
1653
1745
1878
1970
3279
2072
5024
2273
2185
2310
2313
3424
3307
2459
3052
3349
2737
2790
4155
4732
4720
3311
3623
4898
6214
3398
3715
5534
4042
4257
4345
4458
4495
7033
6618
4772
5196
8673
6994
5527
8940
9525
6832
6934
8838
10016
6709
7021
7113
7440
14107
11805
9238
16380
8602
9230
8953
9267
13639
14200
11706
15536
13541
15961
13766
21313
13643
15859
13730
16678
13822
14134
14461
16042
16393
17555
17832
17840
17869
18183
29175
30215
25126
45853
25247
25349
27184
27271
27373
33414
27777
27465
27552
27864
34576
32330
28595
30503
43079
35395
35387
35672
60798
58540
43309
50373
57588
50475
50596
52518
55017
54455
54838
54925
58280
55242
70943
55416
56459
125868
59098
85983
73582
70782
71059
85862
98234
100969
172028
109293
105891
101071
105434
159351
125514
109380
109697
109763
176673
251382
156765
111875
115557
144364
144960
129880
141841
144641
270262
223748
184096
199203
202040
211325
206505
250255
210768
274244
219077
219143
253744
340648
221638
355132
227432
286482
271721
245437
348957
274840
366279
449458
721179
383299
386136
394864
996019
408545
417273
605387
429845
440715
505625
464580
627130
576770
449070
467075
472869
499153
517158
520277
735093
623797
660976
885289
778163
791844
769435
781000
803409
849260
825818
990027
870560
947003
948223
931655
966228
916145
1025840
1404797
1090872
972022
1486794
1289712
2351800
1464385
1603981
1430411
1547598
2396858
1550435
1673969
3641512
1974063
2115530
1956255
1920245
2495821
2498658
1847800
1882373
2007017
1888167
3735967
2261734
3963043
2402433
2720123
4199600
2894796
2980846
3098033
4217989
3556342
4452076
3224404
3562136
3770540
3730173
3895184
3768045
3802618
4290600
3854817
3889390
5992829
8306893
5690785
8712952
7692008
5122556
6748891
6450296
5875642
6078879
9846924
8346960
9554965
16595815
6786540
6954577
9458830
7498218
7532791
13567650
7570663
7657435
7744207
12529175
9011946
10813341
12077133
14134502
14525240
12865419
14698784
11954521
12325938
12662182
13033456
22890474
13741117
20406389
26211635
14284758
14452795
21951013
15031009
15103454
18384004
15228098
15401642
16756153
27486251
15690279
24988120
27896428
52474371
24280459
30918377
24616703
24987977
25359394
25695638
38392850
28025875
42115547
30134463
39644152
29512856
29483804
30259107
30505096
30629740
31091921
69127956
60113544
60764203
39970738
40306982
58030891
48897162
49268436
54129559
49604680
60575725
50347371
56787559
53721513
57509679
98873116
79860227
70229845
80977111
83642415
59742911
80852467
61134836
79526902
97480417
121159449
116901103
80277720
96758297
89204144
140102627
129128663
102989949
99952051
113464424
133989786
111231192
110509072
238060552
153872260
139603138
120877747
129972756
140020631
168731046
141412556
237778850
326982994
196710348
169481864
218332807
228132295
177036017
330700134
189156195
202942000
240359855
210461123
211183243
399652348
456393359
240481828
308751677
549032941
317056648
458692662
358353438
269993387
414814867
345767063
310894420
346517881
458814635
358638059
366192212
628346825
986700263
487930437
399617318
705155940
549233505
421644366
450942951
451665071
510475215
598835266
625808325
578745064
580887807
587050035
615760450
616511268
628631446
962140286
939241245
762559491
712710093
724830271
758255377
1139106661
1059708720
909574803
938873388
821261684
873309437
872587317
902608022
961418166
1030410135
1089220279
1337000441
1194505514
1202810485
1299760128
1203561303
1232271718
1341341539
1353461717
1919335785
1487389762
1437540364
1470965470
1483085648
1693849001
1694571121
1848448191
2958355232
1723869706
2173069565
1745896754
1775195339
1991828301
2164228651
3613184786
2283725793
2406371788
2397315999
3183437118
2557023020
3262585101
2573613257
2694803256
4311816949
3462793771
3994563384
3228982402
3165536591
3176934649
4860107712
3418440827
3469766460
3521092093
3715698007
3737725055
3767023640
4058921132
4447954444
4561544650
4681041792
5574250648
4803687787
5659901100
5130636277
5251826276
10463588887
8803233050
8597832767
6342471240
6394518993
6405917051
6647423229
6583977418
7185464467
6888207287
6939532920
10401392372
10340942892
18999225139
7504748695
9426924740
8506875576
9251642231
9242586442
9484729579
9934324064
10055514063
16807309423
12989894469
13334051913
13053340280
12736990233
12748388291
13579983460
12800436044
13231400647
13472184705
20170933567
16372936866
13827740207
16191175151
25675904730
16756390926
16011624271
18441199640
17749462018
22483042878
18494228673
18727316021
19419053643
22734760108
34452823911
31527752065
25485378524
25548824335
31464306254
25537426277
25979788938
35483706947
36476778039
49213768272
27299924912
29839364478
30018915358
35197590566
37221544694
42305215261
36243690691
45850988749
36190661658
37168515661
37913282316
38146369664
41462076129
42153813751
48220138632
51022804801
51034202859
51086250612
63201333632
51517215215
52837351189
74103943974
114235536491
57318840270
79375358445
59858279836
67932197674
87337755628
92516430836
72434352349
112017226290
73359177319
143550633695
74337031322
75081797977
79608445793
83615889880
115566020103
90373952383
99242943433
123951567564
136927286063
103923601801
104354566404
212009084040
186354257612
178027545775
130678017589
129753192619
127790477510
261643435655
140366550023
360886379088
220127145002
162808304732
147696208641
165455750360
153945477115
149418829299
390036629815
169982398176
228306133968
189616895816
194297554184
203166545234
232145043914
208278168205
324481711406
234107759023
257543670129
258468495099
293486322321
277449401260
268157027533
275486686151
313151959001
288062758664
297115037940
471323572767
319401227475
301641685756
467097436116
404090157199
478653231385
364279952360
442385927228
383914450000
392783441050
485727569465
411444713439
559185355885
465821838334
621042913231
890097944824
516012165228
723491384674
703315677475
641729353620
581308986534
563549444815
585177796604
944475069719
1426807062149
788004607199
871436672435
945588938894
1025007194219
908795606278
2011984858753
748194402360
2477806697087
776697891050
804228154489
1430622028320
1406110110052
1047130824868
981834003562
1079561610043
1097321151762
1101189961832
1144858431349
1345045031095
1148727241419
1525784056253
1311743847175
1675664826924
1524892293410
1992719763762
1619631074795
2149273185584
1552422556849
1580926045539
1656990008638
1730028405922
2493772272514
1758531894612
1786062158051
1851358979357
2028964828430
2599553381717
2446234992927
2242179583111
2176882761805
2697280988198
3106710101792
3516090563973
2460471088594
3255812462175
2931374921970
3470990054152
4113403347309
3077314850259
3172053631644
3209412565487
3133348602388
3282450962771
3237916054177
6103428553614
3488560300534
5375528185499
4874163750003
5618288624571
4093538562468
6240058704180
5173554505081
4623117754732
9385879516385
6169290976147
9106848925105
5391846010564
6959550354686
5537785938853
6008689772229
6210663452647
8709839570497
10882853522232
8856204678748
9412112335824
9998645940231
8864088486033
12138655641519
18249968002418
8716656317200
7582098863002
14787640521323
8967702312471
9711827187039
15136993288618
9796672259813
10160903693585
10014963765296
10929631949417
11546475711082
11400535782793
11602509463211
11748449391500
13590788635231
14718529342726
14920503023144
16291938433499
16298755180202
16438303541750
16446187349035
16549801175473
24948544214908
17293926050041
17378771122815
17597062628298
26346473435286
18679529499510
41266976458430
19957575953398
27894447896710
19811636025109
20175867458881
28194636740535
22330167732210
25339238026731
32737058721952
23350958854711
29042375441541
34035366170048
31156832884476
31212441456643
53233685923441
43640399485327
37554638581696
54240921331996
61237462113625
34672697172856
34890988678339
38637105452908
37408698653407
38491165524619
38855396958391
47706083921819
39769211978507
45515105485612
39987503483990
84390518807917
65749275322231
45681126586921
58241947533050
61779434163493
52393334296252
70981653435150
89454388989693
151233823153186
77396202137397
72227335754552
69563685851195
100416539616401
72081395826263
72299687331746
73163862697475
73382154202958
75899864178026
76264095611798
77346562483010
78624608936898
79756715462497)";

constexpr char input10[] = R"(80
87
10
122
57
142
134
59
113
139
101
41
138
112
46
96
43
125
36
54
133
17
42
98
7
114
78
67
77
28
149
58
20
105
31
19
18
27
40
71
117
66
21
72
146
90
97
94
123
1
119
30
84
61
91
118
2
29
104
73
13
76
24
148
68
111
131
83
49
8
132
9
64
79
124
95
88
135
3
51
39
6
60
108
14
35
147
89
34
65
50
145
128)";

constexpr char input11[] = R"(LLLLLLLLL.LLLLLLL.LLLLLLLLLL.LLLLL.LLLLLL.LLLLLLLL.L.LLLLLL..L.LLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLL..LLLLLLLLLL.LLLLL.LLLLLLLL.LLL.LL.LLLLLLLLLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLLLLLL.LLLLLLL..LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLL.LLLLLLL
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLLL.LLL.LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLLLLLLLL
L.LLLLLLL.LLLLLLL.LLLL.LL.LLLLLLL..LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLL.LLLL.LLLLLLLLL.LLLLLLLLLLL.L.L.LLLLLLLLLLLLLL
LLLL.LLLLLLLLLLLLLLLL.LL.LLLLLLLLL.LL..LL.LLLLLLLL..LLLLLL.L..LLL.LL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLL.LLLLLLLLL.LLLL.LLLLL..LLLL.LLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLL.LLL..LLLL.LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
.L.....L......L.L.L...L...LL..........L....L..LL.....L.L....L.....L......L.......L...L..L.L
LLLLLL.LL.LLLLLLLLLLLLLLLLLL.LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLL.LLLLLLLLL.LLLLLLLLL.LLLLLL
LLLLLLLLLLLLLLLLLLLLLL.LLLLLLLL.LLL.LLLLL.LLLLLLL.LLLLLL.LLLLLLLLLLL.LLLLLLLLLL.LLLLLLL.LLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LL.LL.LLLLLL.LLLLLLLLLLLL.L.LLL.L.LLLLLLLLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLL.LLLLLLLLLLL.LLL..LLLLLLLL.LLLLLLL.LLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLL.LLLL.LLLLLLL.LLLLL.L.LLL.LLLLLL.LLLLLLLL.LLLLL.LLL.LLL.LLL.LLLLLLLLLL..LLL.LLLLLL
LLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLL..LLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
..LLL.....L...L.L....L.L.L.L.LL...L.LL.L..LLL......L.....L.L...L..LL.LL...LL..L....L.......
LLLLLLLLL.LLLLLLL.LLLL.LLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLL.LLLLL.LLL..LLLLLLLLLL.
LLLLLLLLL.LLLL.LLLLLLL..LLLLLL.LLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLL
LL.LLLLLL.LLLLLLL.LLLL.LLLLL.LLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLL.LL.LLLLL.L.LLLLLLLLLL.LLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
......L...LL.L.LL.....LL...L.L.L..L.........L..LLL.L..L.L.LLL..L..L...L...L..L....L.LL.L...
LLLLLLLLL.LLLLLLLLLLLL.LLL.LLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLL.LLLLLLLLLLLL.LLLL.LLLLLLLLL.L.LLLLLL.LLLLLLLL.L.LLLLL.LLLLLLLLL.LLLLL.LLL..LLLLLLLLLLL
.LLLLLLLL.LLLLLLL.LL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL..LLLLLL.LLL.L.LLL..LLLL.LL.LLL
LLLLLLLL..LLLLLLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLLLLL..LLLLL.LLL.LLLLLLL.LLLLL.LLLLLLLLLLLLLLLL
LLL.LLLLL.LLLLLLLLLLLLLLLLLL.LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLL.L.LLLLLLLLLLLL.L
LLLLLLLLL.LLLLLLL.L.LL.LLLLLLLLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLL..LLLLL.LLLL.LLLLLLLLLLL
LLLL.LLLL.L.LLLLL.LLLL.LLLLL.LLLLL.L.LLLL.LLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLLLLLLLLLLLLLLL.LL.LLLLLLLLL.L.LLLLL.LLLLLL.LLLLLLLLLLLL.LL
.LLLLLLLL.L.LLLLL..LLL.LLLLL.LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLLLLLLLL.LLLLLL.LLLLLLLLLLL
.LL...LL.L..LL.LL....L..LL....L..L..L......L.....LLL....L.LLL..L..LLLLL..L.......L.....L..L
LLLLLLLLL.LLLLLLL..LLL.LL.L.LLLLLL.LLLLLL.L.LLLLLLL.LL.LLLLLLLLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
L..LLLLLLLLLLLLLL.LLLL.LLLLLLLLLLL.LLLLLL.LLLLLLLLLLLLLLLLL.LLLLLLLLL.LLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL..LLLLLLLLLLL.LLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLL.LLLLLL.LL.LLLL..LLLLLLLLL.LLLLLLL.LLLLL.LLLL.LLLLLL.LLLL
.LLLLLLLLLL.LLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLLLLLLL.LLLLL.LLL.LLLLLLLLLLLLL.LLLLLLLL..LLLLLL
LLLLLLLLLLLLLLLLL.LL.LLLLLLL.LLLLL.LLLLL..LLLLLLLLLLLLLL.LLL.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
.....LL...L..L.LL........L.......L.LLLLL..L.LLL...L..L....L.L..L.....L.L.........L..L.L...L
LLLLLLLLLLLLLLLLL.LLLL.LL.LL.LLLLL.LLLL.L.LLLLLLLL.LLLLLLL.L.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LL.LLLLLLLLLLLLLLLLLL.LLL.LLLLL.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LL.LL.LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.L.LLLLL.LLLLLLLLLLLLLLLLLLLLLL
LLLLLLLLLLL.LLLLL.LLLL.LLLLLLLLLLLLLLLLLL.LLLLLLLL.LLLLLL.LL.LLLLL.L.LLLLL.LLLLLLLLLLL.LLLL
LLLLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLL.LLLLLLLLL.LLLL.LLLLLLLLL.LLLLLLL.LLLLLLLL.L.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL..LLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLL.LLLL.LLLLLLLLL.L
LLLL.LLLL.LL.LLLL.LLLL.LLLLL.LLLLL.LLLLLLLLLLLL.LL.LLLLLLLLL.LLLLLLL.LL.LLLLLL.LLLLLLLLLLLL
LLLLLLLLL.LLL.LLL.LLLL.LLLLL.LLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLL.LLL.L.LLLLLLLLLL.LLLLLLLLLLL
L.L.L.L..LLLL.....LL.LL...L......LL..LLL.L.L.LL.LL....L.L....L..LL.L.......LLLLLLL.L....LL.
LLLLLLLLL.LLLLLLLL.LLL.LLLLL.LLLLLLLLL.LLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LLLLL.LL.LLL.LLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLL
L.LLLLLLLLLLLLLLL..LLLL.LLLLLLL..L.LLLLLL.LLL.LLLL.LLLLLLLLL.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLL.LLLLL.LLLLLL.LLLLLLLL.LLL.LLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
LLLLLLLLL.L.LLLLL.LLLL.LLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LL.LL.LLLLLLLLLLLLLLL.LLL.LL.LLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLL.L.LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLLL..LLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLL..LLL..LLLLLLLLLL.LLLLLLLLLLLLLLL.LLLLL..LL.LLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
...LL........L..L......L.LL.....L........L.L.L.L.L.L....L.L...L......LL.......L..L..LL.L...
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LLLLL.LLLLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLLLL.LLL.LLLLL.LLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL..LLLLLLLLL.LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLL.LLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLLLLLL.LLLLLLLLLLLLLLL.L.LLLLL.LLLL.LLLLLLLLLLL
LL.......L...LLL.....L...L........L...LL....L....L.L...L..LL.LL...LL.L.LL...L......LLL.LLL.
LLLL.L.LL.LLLLLLL.LLLL.LLLLLLLLL.L.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLLLL.LLLLL.LLL..LLLLLLL.LLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLLLLL.L.L.LLLLLLLLLL.LLLLLL.LLL.LLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLLLLLLL.LLLLL.LLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLL.L.LLLLLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLL.L.LLLLL..LLLL.LLLLLL.LLLLLLL..LLLLLL.LLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
L..L.LLLL.LLL..L...LLL.LL.LLL...L.L.......L.L.....L...LL.LL..L.LL..LL....L......LLLL.......
L..LLLLL.LLLLLLLL.L.LLLLL.LL.LLLLL.LLLLLL.LLLLLLLL..LLLLLLLLLLLLL.LL.LLLLL.LLLLLLLL..LLLLLL
LLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLLLL.LLLLLLLLLLL
LLLLLLLLL.L.LLLLL.LLLLLLLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLL.LLL.L.LL.L.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLLLLLLLL.
LLLLLLLLL.LLLLLLLLLLLLLLLLLL.LLLL.LLL.LLL.LLLLLLLL.LLLLLLLLLLLLLLLLL.LLLLL..LLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLL..LLLL.LLLLL.LLLLL.LLLL.L.LLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLL.LLLL.LLLLLL..LLL
LLLLLLL.L.L.LLLLLLLL.LLLLLLL.LLLLL.LLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLL.L..L.LLLLLLL.LLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLLLLLLLLLLLLLLL.LL..LLLLLLLLLLLLLL.LLLLLLLLLLLLL..LLLLLL.LLLLLLLL
......L...L..L..L.....LLL.L.L..L..LL..............L....L.LL.......L..L....L..........LLL...
LLLLLLLLL.LLLLLLL.LLLL.LLLLLLLLLL..LLLLLL.LLLLLLLLLLLLLLLLLLLLLLLLLLL.L.LL.LLLL..LLLLLLLLL.
LLLLLLLLL.LLLL.LL..LLL.LLLLL..LLLLL.LLLLLLLL.LLL.L.LLLLLLLLLLLLL.LLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLLLLLLLL.LLLL.LL.LLLLLLLLLLLLLLL.LLLL.LLLL.LLLLL.LLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLL.LLLLLLLLLLLLLLL.LLLLLLLLL.LLLLL.LLLL.LLLLLLL.LLLLLLLLLLL
LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL.LLLLLL.LLLLLL.L.LLLLLLLLLL.LLLLLLLLLL.L.LLLL.LLLL.LLLLLL
LLLLLLLLL..LLLLLL.LLLL.LLLLL.LLLLLLLLLLL..LLLLLLLLLLLLLLLLLL.LLLLLLL.LL.LL.LLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLLLLLL.LLLLLLLLL.LLLLLLLLLLLLL..LLL.LLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLLL.LLLLLLLL.LLLLLLLLL.LLLLLLL.LLLLLLLLLLLLLLLLLLLLLL
LLLLLLLLL.LLLLLLL.LLLL.LLLLL.LLLLL.LLLLLL.LLLLLLLLLLLLLLLLL..LLLLL.L.LLLLL.LLLLLLLLLLLLLLLL
LLLLLLLLLLLLLLLLL.LLLL.LLLLL.LLL.L.LLLLLL.LLLLLLLL...LLLLLLLLLLLLLLL.LLLLL.LLL..LLLL.LLLLLL)";

constexpr char input12[] = R"(R180
E1
N1
R90
E4
F84
W3
F19
E5
N1
W5
W4
R90
S1
F70
R90
W2
S3
L180
E2
R90
E1
R90
N2
E3
F55
W3
R90
S2
E4
L90
F33
W4
S3
F11
N4
W4
F88
W3
F62
L90
S3
W3
N1
E3
E2
N1
E3
S3
E5
S4
W5
L90
W5
R90
E4
F36
N4
E4
E5
F47
R90
N3
E3
L180
S5
R90
S5
W2
S3
F43
W2
R180
W2
S2
L180
E2
F49
L90
F77
S5
E1
S2
F39
L180
F12
W1
L90
F60
S2
E3
N1
E5
R90
E1
N4
W4
S4
E2
L90
F100
E3
F58
S2
E4
F83
W3
N1
R90
F99
W5
W4
F19
N3
W1
W5
F70
R180
R90
F58
E5
N3
R90
N4
F86
N4
F70
L90
F36
R90
S4
R180
N5
F81
W5
R90
E5
L90
F73
S5
E3
N1
F27
E2
N3
L180
W2
F24
N2
L90
F69
N2
E3
F49
L90
S4
W5
F18
R180
F62
S2
F65
E3
F100
N1
F96
W1
F75
L180
W2
S2
F93
E5
S3
R90
S2
F34
R90
F83
S1
W1
F58
L180
N4
E1
R90
W2
F93
S3
F20
R90
N3
E3
N3
L90
F8
S3
F18
S3
N2
F6
L270
F70
W5
S3
F54
E2
F75
E3
R90
N2
W3
L90
E4
F58
N5
F97
W2
L90
W5
S2
W1
S5
F85
N1
E1
N4
E4
L90
E1
R90
S5
L180
R270
N1
L90
E4
N3
F45
N2
F68
R90
F36
N5
F82
S5
E4
R180
S2
L180
N3
R270
W5
F70
L90
W5
F80
W4
N2
R90
S3
W1
F23
N1
W1
N4
F70
S3
L180
F57
R90
L90
F55
L90
N4
F87
L90
F1
L270
F17
N5
R180
F84
R90
W5
F7
W1
S1
E3
F46
S5
E2
F23
R90
E4
W2
F96
E5
L90
F65
F3
S5
E5
N3
W4
L90
S2
F57
E1
R90
F68
E3
L90
W1
F29
N5
W5
N1
F95
N1
L90
F31
S5
L180
N2
W5
R90
F27
E1
R90
E3
S5
F10
R90
N4
E2
F25
S4
E5
F51
N3
W2
L90
S3
L180
F17
E4
F93
E3
L90
F41
L90
S5
L90
W5
N1
F81
L90
E4
W2
R90
W1
S5
R90
F39
W3
R90
N5
E1
L90
F82
S3
R90
W4
F66
F4
L90
F77
R90
E1
L90
F53
S4
F35
W1
F64
R90
F9
S1
E1
L90
W4
R90
S2
W5
R90
S4
L90
N3
F8
L180
N5
E5
N4
F35
N5
W1
N1
E5
F15
R180
F92
W3
L90
F4
L90
E1
S3
W3
R90
F37
N5
F19
S2
F98
L90
F24
W3
F68
N5
R90
W3
L90
W3
L90
S1
L90
S4
W3
F56
N4
R90
E3
W1
L90
E4
N3
R180
E1
S1
W2
R90
N3
F82
N2
F37
S3
L180
E2
L180
F6
N2
F96
E2
R180
E2
W3
R90
E2
S5
S1
F23
R90
W5
F75
S1
L90
S3
E1
F83
W4
L180
W5
L90
N1
E1
S2
F17
L90
S2
F53
R90
S3
N3
W1
N4
L180
L90
E3
F9
S5
F24
W3
E5
N2
F73
N1
F28
N2
W4
N3
F53
E5
F47
W2
F60
L90
E2
F19
S1
F63
W5
F100
N3
L180
F83
N4
W5
F37
S1
F50
E1
N2
W3
R90
F85
S4
F72
N4
L90
F48
R90
F99
R90
F58
W3
W4
F64
E1
R90
F74
L90
F23
N3
N3
E1
S1
W5
L180
F98
L90
F36
W4
S2
W3
F9
F72
W5
F78
N2
F65
S3
F47
S5
R90
F68
L180
W2
F7
E2
E3
S4
R90
N2
L180
W2
R180
E4
R90
W3
L90
E4
F54
L180
E2
F6
W5
F82
E4
R90
E4
F25
N2
R270
N4
F18
N5
R90
S3
R90
F38
R90
F97
W4
F85
S4
F56
E4
S1
F40
W3
F52
L90
F76
N4
F15
S2
F22
S5
L180
F91
L180
F8
L90
E4
N4
F67
L90
S3
R180
R90
N4
F71
W3
F34
E2
N1
F43
W5
L180
N5
W2
F42
R90
W3
F39
E1
S2
L180
N5
E3
N5
F28
E1
R90
S3
F40
L90
S2
S2
L90
W5
L90
F93
R180
W4
S4
W4
F100
S3
R90
E2
L180
W1
E3
S5
L90
F87
N1
R90
F3
R90
E5
R90
S3
F45
L90
S2
F42
R90
F95
L90
E1
N3
R90
F73
S3
E1
L90
S2
E3
L90
L270
F38
S5
R90
F42
L90
N1
F7
S3
F65
N2
F42
L180
W5
S4
E4
F65
S4
E5
F51
E4
R180
F70
R90
F28
N5
W5
N1
F96
L90
W4
S3
W3
F89
W1
L90
F75
L270
S3
R90
L90
F7
E2
F24
R180
S2
L180
F48
R90
F37
W2
R90
W4
L90
W3
F81
E4
N2
F39
E4
N1
W1
L90
F59)";

constexpr char input13[] = R"(1006401
17,x,x,x,x,x,x,x,x,x,x,37,x,x,x,x,x,449,x,x,x,x,x,x,x,23,x,x,x,x,13,x,x,x,x,x,19,x,x,x,x,x,x,x,x,x,x,x,607,x,x,x,x,x,x,x,x,x,41,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,29)";

constexpr char input14[] = R"(mask = 100X100X101011111X100000100X11010011
mem[33323] = 349380
mem[52742] = 116688965
mem[4113] = 11499
mem[15819] = 313303
mem[23239] = 755579063
mask = X00X10X1X010110110111X00010X100X000X
mem[49207] = 466621685
mem[34069] = 6874604
mask = 1001100XX00011110110100XX0110000001X
mem[61278] = 56361674
mem[51360] = 61871432
mem[31903] = 45067
mask = 100X100XX0101X11X1X00X00001001X101X0
mem[22981] = 144008
mem[12013] = 49165315
mem[54643] = 50677
mem[59166] = 678129
mem[64022] = 27522
mask = 100110X0001X11011000101X1000001X00X0
mem[32693] = 425145
mem[11437] = 236593490
mem[16078] = 227582
mem[35266] = 197465438
mem[39279] = 127942
mask = 10101000X0X00001X1001000010100111X00
mem[49794] = 2082
mem[60407] = 2129
mem[33300] = 921
mem[18582] = 62106545
mem[32160] = 843912
mem[36917] = 7740
mem[1836] = 54721591
mask = 100010X1X0X011X1101XX00001X01000X10X
mem[8385] = 1381
mem[38022] = 2501412
mem[34713] = 3648024
mem[33245] = 1178087
mem[22176] = 263
mem[20535] = 1289
mem[2092] = 88590569
mask = X001100X00X0X01X0X100X100010110XX101
mem[65061] = 2768
mem[56375] = 6734
mem[18070] = 20571066
mem[61511] = 403157281
mem[4164] = 179682
mem[11801] = 5501
mem[22339] = 14414879
mask = X0011000001X1001X0100111110X00110111
mem[3844] = 1046
mem[33741] = 109390
mem[54311] = 94183595
mem[48744] = 112575
mem[29663] = 2042
mask = X00X100000101001101001001X00001000X1
mem[25325] = 177269
mem[919] = 50779835
mem[52113] = 2386630
mem[60154] = 29645195
mem[24761] = 8101
mask = X101X000X01011011010X100001101110X01
mem[5169] = 2865
mem[55126] = 50829
mem[60154] = 124556261
mem[48753] = 377574
mem[48662] = 9144531
mask = 10011X00001010011010000101110XX0X00X
mem[41623] = 632353121
mem[10365] = 70888870
mem[59458] = 849
mem[18992] = 486294339
mask = X00X100X011011111100X00001001010100X
mem[42046] = 518245944
mem[4654] = 39071
mem[46109] = 1540
mem[3245] = 822
mem[25937] = 257692
mem[19118] = 6601278
mask = 1001001XXX100XXX101XX0001010001000X0
mem[34356] = 55967
mem[52601] = 522574
mem[31903] = 7669828
mem[36165] = 10552
mask = 110X101X00X0111111XX001X0001000XX10X
mem[42649] = 1534730
mem[8324] = 467628
mem[9447] = 3054
mem[41788] = 28205
mem[9353] = 14315559
mask = 1X01X01100111111X101000000X100100000
mem[270] = 3208
mem[20373] = 186089492
mem[43940] = 449607191
mem[63389] = 674
mem[437] = 6933780
mask = 1001X00001X01X0X101101X0010X00110110
mem[22829] = 3301
mem[59260] = 6763
mem[22305] = 203360
mask = 10011110101010X010XX011X0010001XX000
mem[55041] = 6199
mem[55452] = 151
mem[2746] = 464657
mask = 1001000000X0X10110X01101X00100111000
mem[54354] = 666913
mem[44827] = 214920
mem[44621] = 13259544
mem[29462] = 14725
mem[27633] = 284739975
mem[63195] = 11668372
mask = 10X010X10100X111001X101010101X11100X
mem[21667] = 426958
mem[55530] = 91533
mem[10365] = 493
mem[51246] = 513589450
mem[44622] = 1773
mem[4113] = 401
mask = 100X1000001011XXX0100XXX100010X10X00
mem[60407] = 869913
mem[10365] = 59083
mem[18321] = 3019
mem[65061] = 10794134
mem[62827] = 2777572
mem[20373] = 23798334
mask = 1000X10011X010011X10X0000101X0100001
mem[17936] = 4347
mem[38270] = 611
mem[7408] = 2854792
mem[2612] = 604172
mem[24287] = 418220
mem[27110] = 31440
mem[64742] = 1872667
mask = 10X110000010100110X001X01X1000000111
mem[30518] = 13431
mem[64496] = 204238
mem[62259] = 1191
mem[17457] = 3652
mask = 100X1X0XX1101XX11010X000X01010010011
mem[25325] = 67829
mem[4021] = 8039
mask = 1XXXXX0X0010110X11100111001111101110
mem[34600] = 4128134
mem[47565] = 28022073
mask = X0X110000XX010X10010X0X111X111010101
mem[64746] = 17532220
mem[55786] = 109034
mem[12715] = 185475
mask = 1001110X011010111010X1010010100XX100
mem[28923] = 1444
mem[7508] = 41968
mem[39856] = 447
mem[19698] = 4420683
mem[60924] = 7222
mem[8056] = 225410214
mask = 100X10X1X0X011X10110X01X011000X10X00
mem[58206] = 585282
mem[10984] = 105158307
mem[31562] = 526874
mem[60154] = 107013
mem[4409] = 4126230
mask = 1010100010X0XX0111X00X00011X000X0XX0
mem[7122] = 428629
mem[29394] = 262029322
mem[33832] = 6067254
mask = 0001100XXX0010X001100010X000110001X1
mem[1975] = 32392
mem[14891] = 9350
mem[19905] = 28213400
mem[11981] = 132973999
mem[49582] = 4347
mem[64106] = 235564
mem[9648] = 1440
mask = 000110010011XXXX0X1001010001X00X0100
mem[18992] = 628
mem[37263] = 1031
mem[4387] = 1442306
mem[2471] = 1123350
mem[1493] = 88891215
mem[22500] = 3553
mem[6845] = 26007
mask = 10011X00011011X1101X00X001X1X001X111
mem[49101] = 13289
mem[32] = 391365
mem[31906] = 79
mem[48744] = 71043
mask = 1001X0X00010100110X001011001101X01X0
mem[25999] = 2473051
mem[36408] = 56819077
mem[46656] = 2074748
mem[10871] = 8606
mem[7122] = 2053
mem[59403] = 5442
mask = 1XX0X01X100X11111010X000X00X000101X0
mem[1160] = 280063168
mem[20571] = 19030
mem[23225] = 51089295
mem[40992] = 17475
mem[63413] = 1144
mem[19458] = 284777610
mem[21502] = 10410
mask = 100X100X00101X0100X0X0X11100111XX11X
mem[33860] = 160
mem[37007] = 56420
mem[55140] = 490726
mem[47752] = 521745
mem[55594] = 336661995
mem[44008] = 265991679
mask = 1001100001X010011100100X01X0X011111X
mem[1289] = 55191
mem[53058] = 23079796
mem[25362] = 57315626
mem[8895] = 35287816
mask = 0001100100XX00100X1X0X00XX00XX000110
mem[12568] = 136661
mem[9931] = 303487
mem[38781] = 91532
mem[25506] = 950257996
mem[3694] = 6225663
mem[6631] = 62710499
mem[3205] = 7586715
mask = X0001000001X111110100000X0110001000X
mem[61696] = 34763
mem[42583] = 2987088
mem[8416] = 2293694
mem[21503] = 8071
mem[41788] = 950960
mem[9648] = 23284946
mask = 100010000010XX0XX01000000X011100X1X0
mem[30270] = 421
mem[52379] = 86815089
mem[16627] = 3647190
mem[36794] = 132421727
mem[54580] = 248096
mask = 10X1101000X01001X00111110101110001X0
mem[48399] = 9196559
mem[6869] = 32793911
mem[20422] = 1560
mem[12101] = 15618
mem[25154] = 390003034
mem[23791] = 229770864
mem[49558] = 12206144
mask = 100X10010X101XX1XXX000001X00101X1100
mem[3205] = 110968351
mem[65515] = 7362194
mem[2197] = 52580964
mem[13004] = 3723834
mem[46931] = 24935229
mem[919] = 6284
mask = 10001X11100X1X1X10X111X100X0000010X1
mem[30162] = 1665
mem[35687] = 3554
mem[3735] = 8003
mem[18258] = 44276232
mem[48625] = 401841687
mem[62781] = 2814958
mem[5302] = 175144514
mask = 1001X0XX001X101110101000X11X00010X00
mem[38152] = 42369373
mem[36392] = 13302
mem[13867] = 940605082
mask = 10001100X11010X1101000X0X11100110011
mem[63412] = 5289
mem[788] = 6600
mem[27915] = 254034
mem[24347] = 16264001
mem[52437] = 651358
mask = 10011X0X0110X0X11X101100101100X11100
mem[56524] = 1244173
mem[64911] = 2124386
mem[3815] = 107466
mem[14375] = 6798
mem[16285] = 66968238
mem[7968] = 835823180
mask = 10X110100X101XX110X11110XX0111001010
mem[58730] = 132998954
mem[8056] = 754181
mem[39247] = 126
mask = 1001X000001XX10110101X1110110X10101X
mem[59028] = 10817
mem[17977] = 61299509
mask = 1X001100X1X0100110100000X111XXX001X0
mem[2056] = 32701076
mem[2071] = 2401082
mem[9887] = 998417
mask = 100110X11X101X1110X00100X0101111X0X1
mem[33860] = 388064
mem[59050] = 16623098
mem[5188] = 319
mem[37207] = 2470432
mem[27333] = 2026
mask = 1000X000001X1X0X00XXX00X100011X11010
mem[24029] = 9105
mem[14364] = 243545984
mem[4113] = 3279
mask = 1X0X1001X0101011110XX1000100X000X101
mem[17781] = 509963835
mem[37716] = 62611707
mem[23997] = 1023138975
mem[5927] = 32777
mem[55304] = 264062857
mask = 100110X001X01X01100011100X100110X11X
mem[58338] = 741
mem[34693] = 991498
mem[32339] = 30979944
mem[50216] = 66393532
mem[29090] = 11574321
mem[30824] = 15729
mem[16868] = 23942
mask = 1X0XX0010X0011110X101010111011111010
mem[48969] = 3327849
mem[52521] = 460105388
mem[33860] = 422661865
mem[44621] = 6715
mem[27762] = 11952
mem[34536] = 4064
mask = 1001X001001X0011001000100110010001XX
mem[195] = 487302
mem[17992] = 889
mem[11858] = 958195
mem[11013] = 202443463
mask = 1000101X100X1111011000X100110000X001
mem[13097] = 3534
mem[41292] = 85120
mem[9497] = 154119
mem[19610] = 5709354
mem[34972] = 48311
mem[50753] = 180578
mem[35921] = 667946365
mask = XX1010X00110X00111000XX00001000110X0
mem[3712] = 2843518
mem[34604] = 2965
mem[54311] = 162583
mask = 0001X0X00100100X001000001X1X10X01X10
mem[49406] = 965493
mem[59050] = 392048
mem[3574] = 922708604
mem[7419] = 33525859
mem[1933] = 8
mem[4367] = 11521
mask = 1001X0X00X10X00X101X00001110X0100X00
mem[29215] = 417522
mem[56468] = 34229032
mem[26868] = 552971
mem[36368] = 420213
mask = 100110X0X1101011101X01X01101101X001X
mem[4913] = 455
mem[3815] = 11211510
mem[21545] = 1469
mem[35762] = 1806
mem[58825] = 3743
mem[23225] = 474872535
mem[53173] = 46538
mask = 1XX0X00X0X101001001010100X0X01X00010
mem[64106] = 98247289
mem[13686] = 54961348
mem[38944] = 462290318
mem[53185] = 7075
mem[30162] = 39454
mem[14983] = 1010603
mem[38339] = 970
mask = X001100X010X111110001000001X01100110
mem[12827] = 22328
mem[18628] = 7082210
mem[31013] = 20804915
mem[13966] = 86
mem[518] = 1757
mask = X001100XX001001001110000000000XX1110
mem[14375] = 8414661
mem[1568] = 225486
mem[25775] = 336197
mask = 100110000X00100X100001100X111X100X01
mem[2071] = 51386682
mem[32897] = 162194
mem[11308] = 1799417
mem[20829] = 299249
mask = 1X0010XXX0001111XX1100X001X1X0000101
mem[29189] = 36530
mem[657] = 114543286
mem[9356] = 451
mask = X000100000101X0110X0011XX10000110001
mem[30577] = 117881
mem[60874] = 19567558
mem[10363] = 13493
mem[5690] = 382
mem[61059] = 4757304
mem[36165] = 95983791
mask = 100X00X00010100X1010000X101000X10000
mem[33324] = 39476477
mem[34713] = 7398
mem[46214] = 98709
mem[35856] = 1020446010
mask = 10X01X000010000X11100101011X001X0100
mem[65061] = 61054
mem[54052] = 92826
mem[35603] = 58759
mem[58037] = 40910
mem[62217] = 45701380
mask = 1X011000001011011010XX00X10X0X010001
mem[15920] = 5645
mem[28828] = 265910022
mem[29437] = 5544
mem[56112] = 637
mem[45033] = 36063036
mem[12783] = 13776458
mask = 10011011X010100110XX100100XX11011X00
mem[518] = 25998191
mem[13053] = 7866406
mem[38152] = 3208
mem[18730] = 711
mask = 10X11000001XX1X000100X11101XX1X10111
mem[47121] = 11272115
mem[43618] = 27683
mask = 100X1101X0101001100X010000X11001X100
mem[21702] = 34688805
mem[43624] = 3956780
mem[24476] = 17239393
mem[23321] = 25573609
mem[15163] = 1713
mem[65338] = 27386792
mask = 10011010010X10011X0011110XX100001111
mem[53501] = 16700270
mem[28069] = 20683243
mem[33593] = 114830
mem[9962] = 403282549
mem[54061] = 2336
mem[46656] = 7039
mem[58616] = 181
mask = 10001X11001011XX101X0100010010101100
mem[8738] = 234383093
mem[11512] = 1792627
mem[54326] = 1574223
mask = 10011X101X10100XX000X10010X01X01100X
mem[51382] = 17879
mem[44905] = 783
mem[57514] = 1018128542
mem[18628] = 240492
mem[2108] = 3429
mem[2304] = 3748
mask = 0X011001X0X000X000110100101000000000
mem[4452] = 19437119
mem[64742] = 179090
mem[16430] = 486207
mask = 1001X000111X1X1110110X011111100X0011
mem[52004] = 41486
mem[48779] = 83675
mem[17861] = 48577395
mem[39247] = 16952
mem[8738] = 3981
mem[32923] = 1168904
mask = 10011001XX0011X11X0010X1010X10101000
mem[33319] = 44401
mem[4142] = 517003945
mem[29189] = 415157
mem[33358] = 1395165
mask = 1001100X010010011XX00XXX1100101X0101
mem[13618] = 246280673
mem[58338] = 17884
mem[10885] = 816
mem[11277] = 24331199
mem[17936] = 1616051
mask = 1001100X01X01001X00011000110X0X001XX
mem[58338] = 302363844
mem[53596] = 175604903
mem[56468] = 419729
mem[27915] = 581
mem[41501] = 69718
mask = 100110000X1010110100X1X001X00X01001X
mem[18333] = 15544
mem[3929] = 2622169
mem[37718] = 176413
mem[27333] = 848
mem[17456] = 1097
mask = 100110101010X001X000X0001X00001011X0
mem[53045] = 2356198
mem[49908] = 1086
mem[17019] = 7107107
mem[12013] = 70971
mem[7048] = 1585
mem[3666] = 4937143
mask = 10011XXXX01010011000010X1X11100XXX00
mem[65524] = 4129175
mem[5636] = 315661
mem[39270] = 455882795
mask = X1001100110010011010000001110X0X00XX
mem[50481] = 26734
mem[57708] = 199726127
mem[20422] = 130991
mem[13651] = 1094687
mem[1292] = 60536
mask = 110X1011001XX111110100X0000010X1X101
mem[39644] = 14574
mem[8596] = 30400
mask = 1000101XX0X0X1110110111X110011X00110
mem[919] = 32148
mem[41] = 453324
mem[36794] = 179133
mem[2780] = 958033590
mask = 100010X1X11011110010X01101101110X100
mem[20035] = 1674335
mem[18909] = 33271
mem[21491] = 4013451
mem[21792] = 78760
mem[42156] = 980
mem[3276] = 3971405
mask = 10XX10000X10X00111X0XX00X0010011X100
mem[36368] = 5097527
mem[3099] = 104365
mem[57092] = 74461253
mem[46314] = 30483860
mask = X000101X101011X10110XXX001X00X11X010
mem[9948] = 43011947
mem[53185] = 41588
mem[25699] = 101124
mem[60046] = 123243
mem[23975] = 125991
mask = 1X00100000X01X00101011100X1010000101
mem[65101] = 504575
mem[55313] = 14953613
mem[42156] = 526
mem[55573] = 1303957
mem[53260] = 16252
mem[48073] = 8667
mask = 1001100100101X11110X0X0X0111X00001X0
mem[10402] = 793546
mem[45910] = 18
mem[23627] = 72728
mem[7408] = 16579752
mem[22105] = 10576
mem[61054] = 1160961
mem[2989] = 149675383
mask = 0001X001000000XX0111X110010001010110
mem[15867] = 14
mem[23379] = 10511918
mem[4217] = 4840435
mem[29978] = 11828937
mem[28303] = 2358671
mask = 10010010011X0XX11010X000110000110X00
mem[11923] = 149358903
mem[46246] = 3148
mem[17596] = 9370
mem[1540] = 12848
mem[25775] = 29444
mem[32564] = 64008
mem[16097] = 641
mask = 0X011001X010X010X0100X1X0X0X000111X1
mem[45770] = 1008133
mem[15551] = 3912928
mem[53058] = 188856
mem[44827] = 9036496
mem[59530] = 20033543
mask = 1001100X0XX01X0110X000XX010010XX1101
mem[2056] = 737
mem[34972] = 30655
mem[50728] = 927954
mask = 10001X0000X0X0010010101010X001100110
mem[39247] = 425181
mem[64200] = 13111811
mem[8169] = 1250162
mask = 100110000X10XXX11010X0001110X011XX00
mem[62259] = 4350710
mem[56112] = 42327
mem[53173] = 2221557
mem[36759] = 242686307
mem[29077] = 1179326
mem[2056] = 356
mask = 10000000001XX000101000X0X11000X10110
mem[18542] = 454113
mem[44192] = 501708
mem[54994] = 149470837
mem[54260] = 582959
mem[65424] = 295679271
mem[36368] = 2002
mem[16392] = 99
mask = 10100001XX101001X0101100101101000XX0
mem[17861] = 3340321
mem[24705] = 4143350
mem[38940] = 201585
mem[35632] = 19204465
mem[9443] = 5273035
mask = 10X110010010100101000X00001010X0111X
mem[2991] = 51624
mem[56468] = 1603
mem[35633] = 4068
mask = 10011X01001010X10000X011000111101X11
mem[58842] = 69158
mem[43765] = 1624
mem[24913] = 133864698
mem[15015] = 247
mem[10155] = 1064
mem[33787] = 142284522
mem[17457] = 15488682)";

constexpr char input15[] = "0,8,15,2,12,1,4";

constexpr char input16[] = R"(departure location: 49-239 or 247-960
departure station: 43-135 or 155-963
departure platform: 27-426 or 449-955
departure track: 43-655 or 680-949
departure date: 49-159 or 175-970
departure time: 44-257 or 280-970
arrival location: 26-825 or 848-950
arrival station: 25-549 or 557-956
arrival platform: 50-460 or 486-964
arrival track: 50-368 or 385-950
class: 45-644 or 653-966
duration: 28-210 or 216-972
price: 25-193 or 206-969
route: 45-727 or 734-949
row: 39-520 or 537-970
seat: 42-611 or 627-956
train: 34-296 or 307-952
type: 25-343 or 349-949
wagon: 41-309 or 326-964
zone: 49-118 or 132-952

your ticket:
157,73,79,191,113,59,109,61,103,101,67,193,97,179,107,89,53,71,181,83

nearby tickets:
806,748,255,348,591,557,353,155,66,392,223,342,96,285,789,692,543,486,501,744
688,57,344,850,426,702,692,768,335,134,894,237,810,290,227,88,689,805,820,933
628,728,926,787,910,866,740,926,631,549,815,308,543,746,639,189,208,907,713,544
290,654,349,893,68,251,293,765,986,562,397,256,579,386,604,891,176,186,902,68
65,459,619,867,558,872,540,326,852,114,937,503,569,66,758,740,711,608,354,333
362,791,812,918,778,910,218,985,761,713,873,401,748,689,356,600,935,135,595,773
644,723,755,175,101,728,940,800,909,789,288,606,754,367,498,401,851,579,744,250
389,738,757,78,286,725,698,693,80,803,351,883,635,991,811,924,559,777,857,458
349,563,603,249,217,403,736,862,175,889,117,97,495,115,713,296,574,371,908,357
60,77,218,796,609,693,607,914,88,714,715,643,885,924,714,259,863,449,386,487
507,486,73,748,769,422,755,65,793,309,296,301,560,918,104,355,230,397,458,895
402,889,880,362,708,630,597,976,864,724,610,689,334,402,357,73,946,58,940,503
78,67,559,790,335,559,819,425,807,601,206,388,923,760,97,915,911,632,354,18
10,931,749,76,114,65,116,890,789,220,943,759,236,795,425,691,389,405,409,914
150,861,257,806,928,683,631,411,84,569,486,633,781,868,207,352,821,901,857,640
878,417,565,886,874,91,949,359,812,115,55,97,190,293,898,637,593,903,575,348
187,908,913,114,581,412,805,87,818,2,386,743,947,610,771,770,628,81,228,353
811,601,208,653,561,638,95,389,509,106,628,388,372,352,819,180,68,820,156,422
512,654,559,362,924,943,591,499,870,218,870,894,751,929,947,211,282,653,686,693
293,800,412,51,135,934,309,159,750,342,653,658,497,942,871,586,216,743,513,558
203,178,718,808,576,939,815,544,750,567,877,771,497,342,102,489,740,734,820,823
855,449,91,802,394,550,352,889,111,694,388,537,177,367,855,795,946,191,684,251
722,451,823,52,457,328,860,307,401,537,868,822,299,913,415,252,503,694,860,216
342,548,419,500,200,365,106,880,654,586,255,778,759,61,395,746,580,223,503,132
892,915,223,687,883,423,741,361,709,853,696,459,634,208,592,204,918,583,710,864
721,912,560,182,392,824,204,596,924,876,757,704,877,924,509,927,606,494,511,932
775,894,886,87,289,389,410,763,538,727,715,195,804,457,766,52,516,419,768,179
764,774,717,82,822,51,759,207,818,86,582,830,724,114,361,746,587,849,410,594
180,790,112,580,307,460,340,115,328,925,857,620,118,399,247,135,117,566,643,800
402,396,856,140,419,159,727,849,334,156,83,210,79,357,925,79,91,156,364,547
90,597,537,566,338,908,899,914,70,744,250,880,186,944,591,191,906,366,752,729
224,545,420,939,186,395,873,915,349,606,744,911,67,377,755,247,184,749,806,784
871,94,654,792,102,690,873,219,746,856,404,212,225,455,898,599,52,60,653,238
342,397,230,607,101,56,411,692,357,58,537,729,502,886,849,702,930,361,361,705
842,385,356,107,708,912,713,460,206,716,405,576,881,715,228,741,914,629,710,823
106,705,858,217,809,235,341,352,763,208,294,431,206,495,891,69,593,943,85,941
709,73,802,420,284,836,486,342,939,248,631,504,777,563,802,408,79,869,184,106
90,808,572,738,874,914,793,367,51,700,766,10,689,588,454,854,754,223,505,239
402,135,935,946,579,890,641,389,364,909,113,506,792,332,495,566,802,870,23,500
54,748,765,867,516,848,899,417,364,714,597,709,640,22,849,584,74,420,923,542
256,255,997,488,349,935,889,928,226,83,409,795,627,548,807,189,880,757,773,544
545,291,886,841,773,337,175,423,571,636,786,866,488,98,101,693,415,924,78,635
792,457,825,510,581,289,57,929,396,775,895,639,854,845,922,856,355,643,107,539
737,861,586,592,882,878,866,639,113,59,889,550,565,704,405,498,400,419,563,504
720,564,606,896,398,762,403,113,778,852,795,340,881,348,285,608,855,795,885,101
332,764,62,97,605,263,424,861,873,790,514,734,78,393,287,770,392,754,248,757
721,517,642,861,230,902,749,542,549,602,116,870,348,933,596,351,518,89,941,917
390,711,303,876,181,634,933,86,786,353,50,132,206,288,488,689,407,804,415,391
458,111,224,404,74,316,338,945,457,63,222,233,393,639,565,819,793,884,745,68
109,900,709,907,868,921,695,254,290,883,220,101,219,280,231,399,513,363,872,302
606,704,768,249,594,159,99,817,781,188,488,911,797,66,280,247,718,63,901,369
804,299,237,335,234,782,752,511,655,760,505,866,763,308,76,459,411,582,571,893
615,935,568,179,901,61,773,221,761,419,760,655,542,802,630,60,891,794,105,56
888,351,599,185,716,96,641,57,763,395,925,394,509,413,692,708,24,63,291,689
250,254,933,599,876,606,65,896,893,614,353,290,768,280,502,920,507,61,425,492
703,386,806,741,460,805,898,390,425,701,451,224,138,66,581,718,822,597,790,227
906,825,569,407,352,860,388,938,78,347,68,394,735,158,577,707,898,226,178,800
235,894,717,245,227,106,764,334,909,655,393,538,712,410,537,938,585,797,51,54
541,908,991,825,691,76,230,221,454,514,818,876,929,286,360,296,509,868,389,518
193,449,885,181,508,327,693,221,216,945,608,162,451,547,365,361,754,945,399,763
401,233,653,177,291,594,309,563,400,460,490,344,68,256,941,703,907,744,768,80
257,67,905,208,624,107,904,293,577,343,421,605,747,630,936,308,111,912,409,386
132,518,281,502,228,355,796,519,217,232,920,696,222,230,584,157,613,699,101,282
78,786,188,862,106,868,819,747,584,919,794,610,386,728,179,922,109,783,397,60
576,772,280,602,978,631,794,537,400,342,565,397,580,854,930,710,387,596,50,707
747,786,767,277,609,452,283,296,607,285,489,816,207,490,856,449,743,206,412,768
906,817,497,691,927,897,718,567,114,247,801,417,803,883,296,8,405,155,610,906
632,770,406,706,520,608,566,742,749,737,878,824,351,511,848,606,851,708,103,199
889,209,330,788,881,606,721,935,62,717,635,248,709,926,944,928,597,212,759,339
507,805,175,865,713,154,589,251,639,504,599,791,809,112,694,945,423,601,134,185
858,99,633,981,361,882,654,421,565,873,56,250,288,859,510,713,576,510,101,758
66,682,686,714,814,900,854,55,76,546,488,100,406,367,186,142,761,867,545,876
902,713,884,718,738,849,360,543,16,407,237,109,821,72,727,781,357,804,233,848
911,329,745,903,573,921,922,881,580,492,402,329,466,573,410,96,874,386,643,108
355,749,52,863,610,854,216,879,727,753,426,231,79,335,326,336,769,863,799,428
569,721,629,188,289,633,894,565,426,251,547,318,745,636,385,694,741,512,516,892
796,404,492,94,797,291,577,687,839,544,557,943,368,50,722,225,89,451,567,548
182,569,936,135,211,157,294,50,61,506,90,784,224,352,103,872,764,548,680,491
923,223,756,722,308,630,390,886,328,64,283,940,656,239,682,743,796,210,94,582
117,702,710,709,271,218,562,209,801,941,589,815,898,917,640,889,633,95,748,800
117,770,101,848,714,889,798,294,414,593,937,183,897,558,225,803,807,299,784,876
705,548,703,385,787,824,566,222,90,723,56,218,76,105,388,78,916,201,630,880
746,204,513,90,872,333,336,770,684,803,591,115,719,933,771,708,942,902,855,639
724,877,184,877,774,895,106,351,251,813,569,790,606,88,746,560,900,254,623,61
488,571,583,878,571,329,190,400,180,634,851,901,367,908,728,389,886,821,599,635
493,709,913,307,894,393,223,702,363,291,219,813,277,395,943,920,765,940,715,81
341,851,566,871,352,909,18,456,608,801,764,743,89,83,801,853,249,887,921,920
328,817,368,451,703,682,134,116,506,637,64,399,386,189,7,401,597,887,90,873
731,571,852,583,452,598,640,108,898,537,934,236,913,795,489,584,708,294,763,505
388,185,697,765,766,50,744,506,88,338,869,911,360,327,738,423,926,743,305,252
766,927,548,730,767,902,414,578,654,762,600,824,335,333,893,411,716,353,57,356
746,808,210,180,694,678,936,703,417,365,700,406,183,900,815,595,70,158,923,53
771,91,797,711,999,388,558,59,609,799,357,633,186,396,69,902,629,103,455,234
858,641,406,188,921,629,558,58,709,180,399,450,411,855,798,896,911,893,232,830
106,398,281,892,248,516,719,392,911,63,560,135,350,254,1,796,699,411,762,775
76,823,507,588,208,179,217,697,818,516,608,547,169,580,557,680,366,309,879,603
551,823,57,220,91,792,940,558,133,83,857,458,175,53,609,579,216,407,230,912
578,340,115,116,788,85,714,500,338,572,505,862,934,715,927,517,869,516,841,492
308,141,387,98,361,699,282,231,392,918,175,284,107,343,599,601,81,415,294,53
726,654,254,873,810,412,176,79,255,247,348,545,761,726,748,945,85,783,548,878
511,815,793,512,292,228,820,606,175,991,927,338,680,159,948,753,593,175,852,59
495,590,500,854,800,567,349,795,185,359,500,242,749,871,883,189,938,603,918,585
230,929,789,717,380,852,870,106,806,721,745,811,761,722,784,896,352,509,631,704
935,909,745,103,811,864,865,924,654,239,393,352,93,911,87,421,296,345,398,886
776,402,414,861,187,403,580,775,365,362,698,908,199,802,824,88,690,558,111,598
337,595,630,61,510,751,939,395,454,362,932,224,900,778,772,186,218,90,219,246
248,361,818,219,284,280,105,330,879,501,197,749,592,338,109,709,90,53,938,941
66,779,889,83,809,880,337,933,282,863,705,80,767,878,357,345,697,591,349,364
774,694,217,101,737,184,280,573,515,231,295,239,394,796,50,191,369,252,708,361
324,861,775,896,416,638,747,585,763,905,723,74,90,924,570,175,184,179,135,81
410,594,909,185,802,326,848,885,578,492,179,820,715,879,345,862,419,252,71,874
232,818,488,442,541,158,406,588,818,113,402,811,61,410,457,234,751,420,82,935
709,630,756,86,778,623,940,191,343,396,106,862,109,898,568,217,940,110,814,881
568,503,72,255,566,782,758,426,860,575,332,891,553,94,365,636,450,134,747,117
100,373,338,899,796,67,545,938,187,70,61,399,233,746,335,290,804,726,631,357
998,491,693,361,135,67,135,597,309,178,579,686,425,510,879,923,653,714,857,192
419,640,91,178,654,735,785,890,496,200,405,853,887,849,209,719,405,654,717,913
184,214,576,584,923,876,924,897,349,642,426,66,897,390,772,177,454,104,643,360
804,727,189,236,189,74,635,425,930,537,861,492,332,712,542,620,780,108,583,86
640,689,848,699,748,297,184,406,409,777,110,796,539,291,60,606,70,457,500,334
50,602,763,72,238,885,847,942,227,744,355,721,809,505,352,98,817,934,878,239
106,637,92,701,716,757,286,599,513,593,186,979,55,859,512,185,808,710,85,453
210,501,565,85,486,991,289,233,704,885,81,683,942,541,653,234,853,776,180,81
766,618,761,79,586,608,518,746,398,282,709,759,761,237,916,409,349,206,735,883
403,171,816,61,352,366,286,368,99,598,288,286,772,403,398,727,561,610,342,567
287,487,811,338,392,814,708,753,862,764,219,988,158,417,739,572,722,865,286,886
745,222,892,933,292,878,893,84,192,400,326,193,341,491,593,1,823,368,401,872
941,801,156,291,186,785,703,54,744,453,328,547,990,735,83,389,395,852,902,686
877,596,501,982,575,235,397,217,512,92,690,94,456,785,926,717,701,178,738,573
347,943,92,499,330,495,94,788,609,771,576,903,518,227,882,359,784,349,114,851
220,795,491,285,688,180,189,356,66,724,60,538,703,922,394,788,794,396,78,996
822,65,569,589,231,794,741,902,228,910,742,108,91,390,935,694,890,67,780,262
727,456,936,923,541,328,756,457,685,188,78,754,159,585,779,835,683,406,740,80
443,94,775,851,104,388,911,871,109,187,189,394,538,83,858,903,898,100,96,854
216,838,702,798,460,927,86,91,61,208,685,560,560,506,229,50,681,753,855,922
72,216,366,692,784,243,735,689,639,912,567,280,335,158,538,734,633,889,720,774
252,451,943,891,109,808,737,337,76,224,737,655,1,219,179,869,361,749,638,177
851,365,781,901,242,681,638,929,409,891,825,159,783,932,690,281,493,937,105,424
547,790,920,692,158,402,918,587,798,578,516,585,731,368,408,760,911,775,70,805
180,542,507,79,723,605,880,58,786,792,775,153,289,926,68,507,364,175,549,486
210,293,327,51,187,895,108,629,562,219,180,338,80,96,382,71,90,694,402,814
894,737,653,288,864,806,219,460,496,895,782,65,940,198,238,544,291,391,931,767
222,295,565,607,505,159,296,813,509,512,83,341,611,212,220,854,542,358,181,95
578,870,628,354,641,406,542,608,759,603,95,738,79,108,84,167,760,741,773,798
790,722,791,171,734,342,334,216,571,801,693,86,816,251,541,387,739,253,878,90
335,935,309,592,158,180,584,874,512,86,876,423,330,301,295,630,111,337,803,363
340,400,858,289,362,250,572,852,756,609,698,654,223,589,627,384,748,291,687,105
187,885,942,155,135,8,237,452,105,781,257,862,496,191,775,83,606,569,786,547
823,86,307,884,824,791,855,557,69,875,757,511,314,918,295,604,332,851,902,358
56,724,750,822,603,81,420,798,571,879,763,380,102,103,584,58,509,857,293,942
256,307,810,914,908,573,600,102,502,289,358,337,687,915,357,189,936,795,990,353
239,335,816,134,935,460,545,794,642,228,566,190,421,402,626,69,756,354,458,216
597,491,508,893,928,719,419,575,353,808,233,750,789,94,391,891,135,153,401,879
210,798,238,850,859,98,238,865,594,713,417,97,940,902,727,87,211,708,872,366
923,72,291,629,225,530,930,516,537,722,540,709,423,109,57,567,640,897,58,183
577,407,506,726,497,699,735,818,111,509,735,751,620,923,103,388,598,754,450,799
56,638,249,675,702,206,687,726,909,157,109,294,810,60,596,106,368,330,50,96
339,684,908,103,596,936,565,236,224,768,741,182,183,81,291,82,409,755,611,669
699,156,67,653,813,797,948,598,490,898,938,874,548,763,837,309,870,132,538,860
758,390,759,376,394,929,653,794,397,455,114,569,751,513,396,155,368,715,548,250
578,238,759,748,689,606,725,766,176,60,179,905,924,264,595,91,404,879,82,939
491,112,923,913,742,17,327,683,280,158,62,593,506,100,923,815,219,255,226,946
779,450,768,390,732,82,582,820,520,545,284,735,947,700,506,92,513,919,578,583
362,780,748,333,85,901,414,908,207,65,609,6,764,251,699,391,792,737,540,855
235,816,938,486,814,546,253,824,254,9,361,359,343,684,604,180,682,753,741,546
948,767,398,405,942,816,237,106,327,156,771,573,239,760,190,865,832,182,789,930
331,542,223,852,337,802,183,503,248,307,918,407,65,143,399,77,762,814,336,782
706,724,182,306,234,771,606,598,452,455,280,591,449,709,870,639,600,402,339,251
97,701,457,570,942,456,308,400,364,881,489,288,398,721,390,548,85,252,293,621
510,999,761,184,599,604,680,872,395,365,416,71,571,850,881,720,115,572,693,703
211,82,891,765,804,413,608,414,456,915,808,247,920,407,495,927,734,594,342,687
249,855,859,399,393,234,593,747,688,709,449,598,779,547,292,449,202,505,291,886
915,857,85,778,708,976,155,780,229,232,284,701,775,942,192,850,452,585,558,773
333,335,848,257,77,505,912,785,289,351,755,774,244,596,81,232,687,806,724,632
243,52,697,798,775,586,912,603,931,737,360,774,887,489,350,459,59,716,97,857
700,496,420,281,588,585,286,604,280,391,494,452,919,865,66,81,422,890,701,553
781,893,580,774,944,641,581,640,393,717,863,810,809,56,204,231,340,559,586,873
349,495,644,850,68,374,453,895,607,699,750,89,253,774,681,352,228,588,919,687
330,915,805,194,884,884,707,66,583,903,589,713,946,210,110,422,81,569,708,899
798,333,726,214,184,342,98,775,579,902,509,418,933,627,691,797,250,689,181,821
559,876,603,425,911,232,340,921,925,804,331,1,486,926,519,939,581,512,774,811
263,414,157,450,514,913,333,695,906,93,207,597,546,236,717,65,188,880,754,886
598,455,184,755,655,56,60,549,800,709,544,537,500,856,681,503,858,730,451,547
379,593,236,133,546,334,873,726,849,595,727,924,681,451,458,565,286,889,338,189
935,513,870,929,855,946,927,870,257,367,118,496,830,590,350,452,209,362,91,358
96,69,207,602,879,361,544,788,815,330,773,939,391,398,631,890,632,329,219,214
864,191,813,746,503,723,949,58,580,944,111,100,794,903,414,795,936,68,984,557
947,106,331,876,506,737,715,763,223,295,692,746,859,932,930,730,61,771,254,331
288,890,762,615,416,577,694,236,571,98,923,368,419,227,921,633,632,558,396,795
787,363,819,493,176,510,414,914,335,872,832,237,806,118,895,590,739,333,735,567
414,289,227,810,351,248,497,359,452,188,720,648,820,681,748,564,809,585,870,159
460,931,591,851,892,782,207,413,912,400,546,774,156,622,418,907,727,634,501,857
289,902,51,851,68,346,339,945,500,607,596,247,222,449,237,186,295,426,185,418
780,704,155,755,739,165,222,295,914,758,86,188,105,505,251,69,627,225,54,251
820,458,180,540,865,289,810,883,786,224,411,653,608,0,360,583,812,293,819,734
881,251,210,288,69,79,899,874,20,754,100,722,698,392,490,753,64,363,343,576
880,919,563,68,359,800,248,329,566,283,157,222,186,897,21,755,798,112,603,795
499,748,542,743,820,92,410,901,253,233,60,586,586,326,890,782,735,830,606,422
284,824,404,988,811,413,704,704,356,506,804,641,218,781,710,755,507,724,634,698
564,857,823,230,191,808,216,769,53,936,233,54,296,235,306,691,811,236,546,822
941,760,115,653,147,494,927,743,775,928,654,228,708,804,703,813,655,388,423,112
895,54,816,880,682,685,420,400,754,870,191,603,924,367,683,854,183,544,546,148
573,933,371,851,358,183,865,409,188,777,927,607,191,224,725,252,797,892,391,919
495,344,910,757,397,610,88,639,566,798,495,716,811,64,99,191,886,884,102,920
904,699,55,159,226,506,915,512,900,654,919,790,915,453,290,592,878,620,90,226
762,285,459,753,751,56,748,493,759,609,887,79,212,206,584,457,937,848,509,927
167,289,781,62,938,50,856,887,98,815,727,916,367,340,133,512,232,754,352,426
632,784,855,934,654,636,737,872,762,701,107,541,697,868,215,704,589,944,402,627
885,115,588,764,715,366,944,862,946,364,998,723,252,331,853,547,802,900,102,409
604,539,184,634,186,335,704,71,340,943,407,107,525,294,339,518,390,848,490,760
309,546,519,888,305,79,188,225,343,510,452,762,495,825,785,891,255,233,680,396
766,87,884,746,81,113,698,865,360,452,230,501,784,910,918,602,515,820,202,817
400,459,926,567,889,195,928,406,775,787,387,611,251,911,502,222,925,337,932,756
773,943,397,98,425,851,578,226,331,639,637,190,651,220,296,77,749,455,855,930
910,73,600,892,347,608,508,217,785,803,571,890,641,115,685,782,630,226,910,89
87,329,198,735,790,773,457,749,852,83,73,717,490,946,395,818,714,333,807,114
418,885,544,208,707,681,764,764,132,637,181,934,642,457,689,451,345,852,938,294
538,699,236,98,636,537,599,921,158,295,745,222,697,902,760,515,768,64,347,451
77,158,742,416,450,850,865,133,176,714,926,529,280,914,776,817,888,413,591,104
667,419,739,726,865,609,520,922,425,634,683,189,544,585,938,739,868,340,110,504
691,705,727,871,218,611,390,778,635,839,281,391,822,96,700,653,424,653,413,296
76,341,700,573,740,54,573,105,924,725,889,796,753,504,387,242,920,351,192,228
354,207,452,640,791,327,914,761,105,653,949,133,105,542,808,336,302,577,722,736
811,353,830,934,61,364,723,739,700,282,220,337,885,694,764,540,601,349,424,934
923,447,751,642,915,210,516,916,404,352,865,111,133,288,693,806,822,219,286,945
862,245,488,587,394,208,723,632,926,935,219,75,416,77,639,98,105,784,560,782
354,727,574,789,835,516,772,186,637,654,785,928,932,280,255,710,782,221,558,742
517,776,406,880,576,430,920,250,54,110,499,388,252,813,653,892,764,155,777,575
94,262,104,55,718,191,715,112,179,933,289,237,584,714,567,508,132,913,116,329
714,866,689,492,912,253,81,749,751,629,868,337,939,880,65,300,184,239,456,920
938,409,408,854,564,638,742,848,914,885,343,801,776,774,628,68,540,403,227,168
350,132,932,390,71,211,58,233,941,904,944,280,365,74,788,76,288,255,791,783
508,561,712,859,495,884,653,934,102,911,703,326,438,280,862,588,409,715,118,454
298,541,103,248,694,226,630,796,116,864,887,192,296,400,715,288,711,913,820,892
572,367,922,916,416,116,859,589,587,633,688,272,692,578,885,803,282,207,563,641)";

constexpr char input17[] = R"(#....#.#
..##.##.
#..#..#.
.#..#..#
.#..#...
##.#####
#..#..#.
##.##..#)";

constexpr char input18[] = R"()";

constexpr char input19[] = R"()";

constexpr char input20[] = R"()";

constexpr char input21[] = R"()";

constexpr char input22[] = R"()";

constexpr char input23[] = R"()";

constexpr char input24[] = R"()";

constexpr char input25[] = R"()";
