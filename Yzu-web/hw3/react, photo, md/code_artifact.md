# 元智大學資訊工程學系網頁重構專案 - 完整對話與開發紀錄

---

## 一、 初始需求與架構規劃

### 1. 專案背景與需求
* **目標**：重新設計元智大學資訊工程學系（YZU CSE）官方網站首頁及子頁面。
* **規格要求**：
  1. 包含 8 大核心功能區塊：系所介紹 (Intro)、課程資訊 (Course)、師資團隊 (Faculty)、研究領域 (Research)、最新公告 (Announcement)、學術活動 (Events)、網路資源 (Resources)、聯絡我們 (Contact)。
  2. 響應式設計（RWD），重點優化 768px（平板視口 Viewport）體驗。
  3. 提供三個不同視覺風格的設計方案（A、B、C），供選擇決策。
  4. 包含設計說明檔 (`design.html`)、兩位同學的查找與互動測試紀錄。

---

## 二、 三種視覺方案設計與比較

### 方案 A：科技現代風 (Modern Tech)
* **設計特點**：明亮簡潔、極簡網格、高對比色調。
* **適用場景**：適合快速瀏覽與清晰傳達資訊。

### 方案 B：賽博未來風 (Cyberpunk / Future UI) 【最終選定主站】
* **設計特點**：深色背景 (Dark Mode)、霓虹藍/青色調、動態粒子與互動終端機 (Interactive CLI Terminal)。
* **優勢**：極具資工系特色，大幅提升互動性與科技質感。

### 方案 C：經典學術风 (Academic Classic)
* **設計特點**：傳統莊重、經典藍白配色、結構清晰嚴謹。
* **優勢**：符合標準大學院校官方網頁樣式。

---

## 三、 功能調整與加回互動終端機 (Terminal)

### 需求調整
* **問題**：使用者確認最終版首頁缺少「互動終端機 (Terminal)」功能。
* **解決方案**：在方案 B 主站 (`index.html`) 中重新加回純 JS/CSS 實作的 Interactive CLI Terminal 區塊。

### 終端機支援指令列表
1. `help`：顯示所有可用指令說明。
2. `contact`：輸出系辦地址、電話與 Email。
3. `fields`：列出五大核心研究領域。
4. `clear`：清空終端機歷史輸出。

---

## 四、 最終專案檔案結構總覽

* `index.html`：方案 B 賽博未來風 (官方主站，含 8 大功能區塊與互動終端機)。
* `design.html`：設計說明檔 (包含三方案比較表、768px 優化說明與兩位同學測試紀錄)。
* `intro.html` / `course.html` / `faculty.html` / `research.html` / `announcement.html` / `events.html` / `resources.html` / `contact.html`：8 大核心子頁面。

---
*紀錄結束 - 檔案生成完成*