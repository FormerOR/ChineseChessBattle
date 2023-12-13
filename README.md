# ChineseChessBattle
中国象棋对战项目

> 创建时间：2023年12月12日9:00

![流程图](C:\Users\linxuefeng\Desktop\数据结构\图片\流程图.jpg)

### 项目进度

- [x] 注册登陆功能
  - [x] 界面UI
  - [x] 信号槽连接
  - [x] 注册信息登记
  - [x] 用户登陆验证
  - [x] 登录后链接创建棋局
- [ ] 棋局创建
  - [x] 棋盘绘制
  - [ ] 工厂生成棋子
  - [ ] 布置棋子
<<<<<<< Updated upstream
=======
- [ ] 走棋
  - [ ] 符合走法
  - [ ] 非法走法提示
  - [ ] 悔棋
- [ ] 判定输赢
  - [ ] 对将（判断回合）
  - [ ] 将帅被吃（判断场上棋子列表是否存在将帅）
  - [ ] 将帅无路可走（每一种走法都处于威胁状态）
- [ ] 退回主界面



棋子类`Piece` 实现基本功能

- [x] 名称转换
- [x] 棋子移动
- [x] 获取棋子的红/黑属性
- [x] 获取棋子位置
- [x] 判断是否在九宫格里
- [x] 判断走棋后是否会造成自己处于将军
- [x] 判断当前走法是否可行
  - [x] 符合棋子基本走法
  - [x] 走棋后不会被将军



派生棋子：继承自`Piece`

- [x] 将帅 `King`
  - [x] 九宫格内移动
- [x] 仕 `Adviser`
  - [x] 九宫格内移动
- [x] 象`Elephant`
  - [x] 走田字格
  - [x] 不能出己界
- [x] 马`Horse`
  - [x] 走日字格
  - [x] 蹩马脚不能走
- [x] 車`Rook`
  - [x] 走直线
- [x] 炮`Cannon`
  - [x] 路线上必须有且仅有一个棋子
- [x] 兵卒`Pawn`
  - [x] 己界内直走
  - [x] 敌界内不能向后走
>>>>>>> Stashed changes
