<?php
$z[0]=Array("global","",378,404);
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",910,1002);
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("channelartlist","\r\n              <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i>\r\n                <ul class=\"\">\r\n                  {dede:channel type='son' noself='yes' }\r\n                  <li class=\"\"><a class=\"\" href=\"[field:typelink/]\" target=\"\"><strong>[field:typename/]</strong></a></li>\r\n                  {/dede:channel}\r\n                </ul>\r\n              </li>\r\n              ",1101,1678);
$z[2][4]['typeid']="9,10,11,12,0";
$z[2][4]['currentstyle']="current";
$z[3]=Array("channelartlist","\r\n              <li class=\"{dede:field.currentstyle/}\"><a class=\"first-level\" href=\"{dede:field name='typeurl'/}\" target=\"\"><strong>{dede:field name='typename'/}</strong></a><i></i></li>\r\n              ",1695,1980);
$z[3][4]['typeid']="13,14,0";
$z[3][4]['currentstyle']="current";
$z[4]=Array("global","",2427,2453);
$z[4][4]['name']="cfg_webname";
$z[5]=Array("channelartlist","\r\n          <li><a href=\"javascript:;\"><span>{dede:field name='typename'/}</span><i class=\"touch-arrow-down\"></i></a>\r\n            <ul>\r\n              {dede:channel type='son' noself='yes' }\r\n              <li><a href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n              {/dede:channel}\r\n            </ul>\r\n          </li>\r\n          ",3570,3992);
$z[5][4]['typeid']="9,10,11,12,0";
$z[6]=Array("channelartlist","\r\n          <li><a href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span></a></li>\r\n          ",4004,4183);
$z[6][4]['typeid']="13,14,0";

?>