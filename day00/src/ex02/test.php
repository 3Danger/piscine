<?php 
$dirname = __DIR__;
$success = true;
$out = array();
$output = exec("cd $dirname && ls -l", $out);
foreach($out as $line) {
        $elems = array_values(array_filter(explode(" ", trim($line)), function($e) {
               return !(strlen($e) < 1);
        }));
        switch($elems[8]) {
                case "test0": 
                        if (!(  $elems[0] === "drwx--xr-x"
                        &&      $elems[1] === "2"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "20:47"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test1": 
                        if (!(  $elems[0] === "-rwx--xr--"
                        &&      $elems[1] === "1"
                        &&      $elems[4] === "4"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "21:46"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test2": 
                        if (!(  $elems[0] === "dr-x---r--"
                        &&      $elems[1] === "2"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "22:45"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test3": 
                        if (!(  $elems[0] === "-r-----r--"
                        &&      $elems[1] === "2"
                        &&      $elems[4] === "1"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "23:44"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test4": 
                        if (!(  $elems[0] === "-rw-r----x"
                        &&      $elems[1] === "1"
                        &&      $elems[4] === "2"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "23:43"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test5": 
                        if (!(  $elems[0] === "-r-----r--"
                        &&      $elems[1] === "2"
                        &&      $elems[4] === "1"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "23:44"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
                case "test6": 
                        if (!(  $elems[0] === "lrwxr-xr-x"
                        &&      $elems[1] === "1"
                        &&      $elems[4] === "5"
                        &&      $elems[5] === "1"
                        &&      $elems[6] === "Jun"
                        &&      $elems[7] === "22:20"
                        )) {
                                echo("err : " . $elems[8] . PHP_EOL);
                                $success = false; 
                        }
                        break;
        }
}

var_dump($success);
return $success;
