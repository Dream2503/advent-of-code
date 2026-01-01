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
