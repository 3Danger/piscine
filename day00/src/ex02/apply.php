<?php
$root = __DIR__;
for ($x=0; $x <= 6; $x++)
    if (is_file("$root/test" . $x)) 
        unlink("$root/test" . $x);
    else if (is_dir("$root/test" . $x)) 
        rmdir("$root/test" . $x);

exec("cd $root && mkdir test0 && touch test1 && mkdir test2 && touch test3 && touch test4 && ln test3 test5 && ln -s test0 test6");

$fp = fopen("$root/test1", "w");
for($x=0;$x < 4; $x++) {
    fwrite($fp, "*");
}
fclose($fp);


$fp = fopen("$root/test3", "w");
for($x=0;$x < 1; $x++) {
    fwrite($fp, "*");
}
fclose($fp);


$fp = fopen("$root/test4", "w");
for($x=0;$x < 2; $x++) {
    fwrite($fp, "*");
}
fclose($fp);

exec("cd $root && chmod 714 test1 && chmod 504 test2 && chmod 404 test3 && chmod 641 test4 && chmod 404 test5 && chmod 755 test6 && chmod 715 test0");

exec("cd $root && touch -t 201906012047 test0 &&  touch -t 201906012146 test1 && touch -t 201906012245 test2 && touch -t 201906012344 test3 && touch -t 201906012343 test4 && touch -t 201906012344 test5 && touch -ht 201906012220 test6");