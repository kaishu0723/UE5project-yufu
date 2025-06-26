# UE5project-yufu

エディタ起動時、自作BPノードを含んでいるBP（BP_receiveTCP）がコンパイルエラーになっている。おそらく自作ノードの関数を書いているC++スクリプトより先に自作ノードを含んでいるBPがコンパイルされている（多分）
その場合、ノード（BytesToString、CreateProceduralSoundWaveFromWav）を一回削除しコンパイル → 

該当するC++スクリプト（./Source/TCP/Private/MyBlueprintFunctionLibrary.cpp）をコンパイル → 

もう一度ノードを追加し接続すると解決

解決策模索中．．．
