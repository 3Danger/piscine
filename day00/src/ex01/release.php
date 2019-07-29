<?php 
$root = __DIR__;
exec("cd $root && tar -cf testShell00.tar testShell00 && mv testShell00.tar ../../release/ex01");