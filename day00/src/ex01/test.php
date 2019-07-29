<?php 
$dirname = __DIR__;
$f = "testShell00";
$output = exec("cd $dirname && ls -l $f");
$tocheck = explode("    ", trim($output));
return 
        $tocheck[0] === "-r--r-xr-x" 
&&      $tocheck[1] === "1" 
&&      $tocheck[4] === "40"
&&      $tocheck[5] === "1"
&&      $tocheck[6] === "Jun"
&&      $tocheck[7] === "23:42"
&&      $tocheck[8] === "$f";