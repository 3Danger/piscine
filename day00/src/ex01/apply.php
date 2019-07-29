<?php 
$root = __DIR__;
$file = "testShell00";
if (file_exists("$root/$file"))
    unlink("$root/$file");
exec("cd $root && touch $file && chmod 200 $file");
$x = 0;
var_dump("$root/$file");
$fp = fopen("$root/$file", "w");
while($x < 40) {
    fwrite($fp, "*");
    $x++;
}
fclose($fp);
exec("cd $root && chmod 455 $file && touch -t 201906012342 $file");
