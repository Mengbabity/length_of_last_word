# length_of_last_word

求一个字符串最后一个单词的长度。

开始没有考虑最后有空格的情况。所以首先计算字符串尾部的空格长度，则总长度n减去nn即可得知for循环需要的次数。

定义vector<char>来存放最后一个单词，若遇到空，vector.clear()即可。
