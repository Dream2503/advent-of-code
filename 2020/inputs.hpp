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

constexpr char input6[] = R"()";

constexpr char input7[] = R"()";

constexpr char input8[] = R"()";

constexpr char input9[] = R"()";

constexpr char input10[] = R"()";

constexpr char input11[] = R"()";

constexpr char input12[] = R"()";

constexpr char input13[] = R"()";

constexpr char input14[] = R"()";

constexpr char input15[] = R"()";

constexpr char input16[] = R"()";

constexpr char input17[] = R"()";

constexpr char input18[] = R"()";

constexpr char input19[] = R"()";

constexpr char input20[] = R"()";

constexpr char input21[] = R"()";

constexpr char input22[] = R"()";

constexpr char input23[] = R"()";

constexpr char input24[] = R"()";

constexpr char input25[] = R"()";
