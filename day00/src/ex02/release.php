<?php 
$root = __DIR__;
exec("cd $root && tar -cf exo2.tar test0 test1 test2 test3 test4 test5 test6 && mv exo2.tar ../../release/ex02");