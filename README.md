新楓之谷 ARC / AUT 計算機
=====

| [![Codacy Badge](https://app.codacy.com/project/badge/Grade/020d720a719a400082f1ef7b1d1aa39e)](https://www.codacy.com/gh/WhatTheBlock/MapleStory-ARC-Calculator/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=WhatTheBlock/MapleStory-ARC-Calculator&amp;utm_campaign=Badge_Grade) | [![Windows build](https://github.com/WhatTheBlock/MapleStory-ARC-Calculator/workflows/Windows/badge.svg)](https://github.com/WhatTheBlock/MapleStory-ARC-Calculator/actions?query=workflow%3AWindows) |
| --- | --- |

### 適用的遊戲版本為 TMS v258

- 巴哈姆特詳細介紹文章：[點我](https://forum.gamer.com.tw/C.php?bsn=7650&snA=1000541) <br><br>

#### 若計算公式未即時更新請至巴哈姆特文章回覆通知
#### 感謝您 😊 <br><br>

### 使用介面：
----
![ui_1.png](/ui_1.png) <br>
![ui_2.png](/ui_2.png) <br>
![ui_3.png](/ui_3.png)

### Changelog：
----

#### v3.1.0
- 更新至TMS v258系統改動
- 補上前版本強化費用下修的改動
- 修正艾斯佩拉符文圖示被裁切的錯誤
- 預先新增AUT地區至KMS最新進度
- AUT頁面改為與ARC相同的UI配置
- AUT強化費用不再用億縮寫顯示
- 更新怪物最高AUT上限 (極限咖凌)
- 更新個人最高AUT上限
- 修正分位符號函式錯誤
- 新增數據來源連結按鈕
- 修正AUT單顆滿級天數計算錯誤

#### v3.1.0-beta1
- 新增暗黑介面
- 解決系統縮放比例非100%的顯示問題
- 一鍵多選按鈕新增一鍵取消功能
- 更改一鍵多選按鈕圖示
- 更改清除存檔按鈕圖示
- 不再支援32bit

#### v3.0.1
- 新增自動存檔 / 載入存檔功能
- 一鍵多選按鈕改為圖示按鈕樣式
- 修正內部版本號設定錯誤
- 新增 `msvcp140_1.dll` runtime

#### v2.9.5
- 重寫秘法觸媒功能
- 修正ARC/AUT經驗無法增加的錯誤

#### v2.9.4
- 跟進TMS v253系統改動
- 重寫ARC取得方式
- 達成日的計算邏輯調整為起始日獲得量也計算進去
- 修正ARC 1.5倍增傷數值錯誤，因極限屬性讓ARC尾數有可能出現5，無需再進位
- 修正其他分頁空白過多的問題
- ARC傷害計算的自身ARC步進單位改為5
- AUT傷害計算的自身AUT步進單位改為10
- ARC達成日計算的目標ARC步進單位改為5
- AUT達成日計算的目標AUT步進單位改為10

#### v2.9.3
- 新增奧迪溫AUT達成日計算
- 新增奧迪溫AUT升級楓幣計算
- 調整視窗大小
- 調整部分快捷鍵設定
- 修正視窗縮放的錯誤
- 修正部分Icon模糊的問題

#### v2.9.2
- 修正270 AUT升級楓幣的錯誤

#### v2.9
- 新增AUT達成日計算
- 新增AUT升級楓幣計算
- 新增AUT傷害計算
- 新增單ARC / AUT升到滿級的日期計算
- 新增快捷鍵 
- 新增快捷功能說明 (左右方向鍵或滑鼠滾輪可切換頁面)
- 升級所需楓幣功能重構
- 更新屬性增加量比率
- 重新設計"其他功能"頁面
- 修正阿爾卡娜圖示左偏的問題
- 修正ARC升級資訊楓幣數值計算錯誤
- 切換頁面將調整至適合的視窗大小
- 調整勾選按鈕
- 怪物ARC / AUT設定改為以10為增減值
- 修改主程式icon
- 修改主程式名稱

#### v2.8
- (New) 新增角色等級設定，可依照等級一鍵勾選任務
- 更新每日最高取得量
- 每日取得數量設定值調整為組隊任務
- 全地圖的打怪任務都改為勾選的方式
- 新增部分介面說明
- 修正秘法觸媒的錯誤
- 32位元系統支援
