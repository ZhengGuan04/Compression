# Compression
project4 (C)

To save space when storing large amounts of data, we can use compression algorithms.
A run-length encoding (https://en.wikipedia.org/wiki/Run-length_encoding) is a well-suited algorithm when data (i.e., single characters) are repeated frequently. Instead of storing each character separately, run-length encoding stores a tuple of a single digit and a single character: the digit indicates how many times the following character is printed. For example, the string "AAAAbaaaCCCCa" would be encoded as "4A1b3a4C1a". Shorter examples would be "A" -> "1A", "ttt" -> "3t", and "ABBA" -> "1A2B1A".

Given a run-length encoded string, it is possible to recreate the original string through decoding: "4A1b3a4C1a" would turn into "AAAAbaaaCCCCa", i.e., the original string. (Generally, decode(encode(data)) -> data for all lossless compression algorithms.)

Part1 I implement the function str_encode to transfer "AABccc!!" => "2A1B3c2!"
Part2 I implement the function str_decode to transfer "2A1B3c2!" => "AABccc!!"
