# 快速导航
### 点击[此处](#教程与帮助)直接跳转[sa-mp服务器转open.mp服务器 教程与帮助](#教程与帮助)主题

# 索引
[open.mp官网](https://www.open.mp/)

[open.mp服务端](https://github.com/openmultiplayer/open.mp/releases)

[open.mp启动器](https://github.com/openmultiplayer/launcher/releases/tag/v1.0.0)

[samp | openmp 联机社区QQ群](https://qm.qq.com/q/hgf1H1bReg)

[samp | openmp 联机社区QQ频道](https://pd.qq.com/s/3upf7y7oo)

[open.mp维基百科](https://www.open.mp/docs)

[samp维基百科](https://sampwiki.blast.hk/wiki/Main_Page)

[samp旧论坛备份](https://sampforum.blast.hk/)

推荐大家加入我们[QQ群](https://qm.qq.com/q/hgf1H1bReg)和[QQ频道](https://pd.qq.com/s/3upf7y7oo)以获得最新资讯和支持，打造互相探讨学习交流的净地

此篇文档的版本号为1.0，是首版本，因此可能会有纰漏的部分，后续发现问题将会更新，如果你发现[迁移open.mp的教程](#教程与帮助)无法解决你的某些问题，请及时和本人联系。

或者你希望补充此文档未提及到的部分，或愿意改善此文档的可读性，欢迎提交拉取，为国内社区做贡献。

此文档由本人原创编写完成，制作不易，希望大家可以积极把此链接分享给更多的人以提供帮助和发挥此文档的真正作用。

# San Andreas Multiplayer
圣安地列斯多人游戏（简称 SA:MP）是《侠盗猎车手：圣安地列斯》电脑游戏的第三方多人游戏模组。圣安地列斯多人游戏是由《侠盗猎车手》系列游戏的忠实粉丝组成的团队开发的，他们利用业余时间开发 SA:MP 是他们的业余爱好。

### SA:MP下载地址
[SAMP联机工具/服务端下载地址](https://www.sa-mp.mp/)

### 背景信息
SA:MP最初是[罪恶都市](https://gta.fandom.com/wiki/Grand_Theft_Auto:_Vice_City)的多人游戏修改版，2005 年 4 月初被命名为Vice City Multiplayer([VC:MP](https://vc-mp.org/))。由于团队开始工作时，即将推出的《圣安地列斯》游戏尚未发布，因此决定将 VC:MP 作为 SA:MP 的代码库进行开发。该团队由GTA modding社区的一些知名成员组成，由GTA modding社区的杰出人物 kyeman 领导。通过提供预览视频和截图来展示正在进行的开发工作，该模组很快在GTA modding中赢得了大批粉丝，其小型论坛在更换新家之前吸引了大约 120 名用户。VC:MP 经过几次公开测试后，获得了极高的关注度（以至于在测试服务器上等待很长时间都是很常见的事），最终以热烈的反响发布，并从 v0.1 升级到 v0.1d，同时正在发布开源代码。现在，在 SA:MP 的主要团队工作期间，另一位社区成员利用该源代码推进 VC:MP。

### 多人合作模式的失败
2005年6月10日《圣安地列斯》PC版发售后，开发团队继续以《VC:MP》相同的方式开展工作--私下工作，定期在网站上发布截图和视频，并通过论坛回答玩家的问题（论坛最终从小型主机转变为最大的GTA社区GTANet/GTA Forums的子论坛，同时也是IRC频道的主机）。一切都在预料之中，直到发生了一件出乎社区意料且不受欢迎的事情：开发团队决定，为了保持《圣安地列斯》的原汁原味，MOD 的开发路线将彻底改变--不再是支持大量玩家的死亡竞赛式(Deathmatch)多人游戏，而是将其完全改为仅支持 6 名玩家的多人合作式 Mod。他们的想法是，你可以像单人游戏一样进行游戏--与行人、警察追逐你，并跟随不断变化的故事情节--但你的 5 个朋友会和你一起玩。这是一个非常新颖的想法，但却遭到了社区的广泛反对，GTANet 的新论坛上充斥着对 SA:MP 开发团队的仇恨，无论团队如何努力推广这个想法。像这样一个需要社区支持的大型项目，情况并不乐观。

### kyeman 离开 / GTA:Multiplayer
2005 年 9 月 18 日，首席编码员兼团队负责人 kyeman 在合作模式讨论中途离职，原因是工作繁忙，无法继续开发该模式。他将所有现有工作移交给了第二位主要编码员 spooky，后者接管了开发工作，并将项目重新命名为 GTA:Multiplayer (GTA:M)，以表示管理层的新变动。

### kyeman 回归
大约一个月后，kyeman 整理好了自己的个人生活，决定开始帮助团队做一些事情。他并没有宣布复出，只是说他会帮助团队解决遇到的任何困难，以确保他的代码库工作得以继续，并在社区中保持信心。在此期间，由于技术上的限制，以及收到曾经热心的社区失望的反馈，多人合作模式的想法也被取消了，最终 kyeman 正式重新加入团队，并再次负责游戏的进程。

### 回到 SA:MP
在解决了 kyeman 回归负责和开发方向回归大型死亡竞赛风格(deathmatch-style)游戏初衷的所有问题后，项目的正式名称又重新改为 San Andreas Multiplayer(SA:MP)(圣安地列斯多人游戏)，以避免混淆，同时也避免与 Rockstar Games 就使用 "Grand Theft Auto" 商标产生任何法律纠纷。

### SA-MP的生日
2006年5月10日，San Andreas MultiPlayer 正式发布

### 经历了十几年的发展，SA-MP最终不复存在
* 2019年11月11日 SA-MP的唯一开发者 Kalcor/kyeman 在SA-MP官方论坛上发帖：“我在这个主题上发帖的目的是让大家知道 SA-MP的开发即将结束。将不再为 SA-MP 提供更新，也许只是安全更新，我/我们不得而知”
* 2019年11月22日 Kalcor更新了SA-MP 0.3.7-R4客户端，修复菜单系统中的安全漏洞，请不要再使用以前版本的 SA-MP客户端
* 2020年9月下旬 SA-MP 维基百科彻底下线
* 2022年11月16日 SA-MP 0.3.7-R5客户端更新，修复重要漏洞

### 游戏模式(Gamemode)
在SA:MP中有多种所谓的游戏模式，这是因为游戏使用了创新的 PAWN 脚本引擎，允许任何用户在《圣安地列斯》地图中创建任务，并以特殊的文件格式提供给服务器使用--这与普遍的游戏为相同的模式设置单独关卡的方式非常相似。SA:MP的一些特色玩法包括突击（攻击/防御）、夺旗（夺取对方的车、船、自行车或飞机）、团队死亡竞赛(Team Deathmatch)、死亡竞赛(Deathmatch)、赛车(Racing)，甚至是必须拥有最多金钱（通过赌博或杀害其他玩家获得）的玩家才能获胜的模式。您还可以选择一般的自由模式(freeroam)，在这些模式中，您可以随心所欲地按照自己的目标行事。

### 创建游戏模式
创建游戏模式的范围很广，从简单地将地图坐标放入PAWNO编辑器中编译，到创建包含出生点、各种目标、自定义游戏指令的完整成熟的任务，不一而足。

### 官方提供的游戏模式示例
| 游戏模式 | 描述 |
| :--| :----- |
| [GRAND LARCENY](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/grandlarc.pwn) | 地图横跨San Andreas的SA-MP 0.3 版本的自由游戏模式，拥有更多的一些脚本示例 |
| [LVDM (aka Moneygrub)](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/lvdm.pwn) | 以任何您认为合适的方式获得最多金钱的玩家即可赢得该游戏模式。由于没有任何 “真正 ”的目标，因此是一种自由游戏模式，在许多服务器中都很受欢迎。 |
| [San Fierro TDM](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/sftdm.pwn) | 在San Fierro进行的团队死亡竞赛中，您必须与您的队伍团结一致，成为得分最高的玩家. |
| [Rivershell](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/rivershell.pwn) | 一种基于在水面上游玩的夺旗模式(CTF, Capture The Flag)，在该模式中，您的团队必须在对方占领您团队的基地之前，从对方基地夺取一艘缓慢移动的船，从而赢得胜利。在 SA-MP 0.2 中，Rivershell 2 模式可用，但没有源代码. |
| [Local Yokel SE](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/lyse.pwn) | 与 Rivershell 相同，但以陆上跑车为基础（SE 代表运动版） |
| [Cops 'n' Gangs](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/cng.pwn) | 另一种夺旗模式(CTF, Capture The Flag)，这次是在Los Santos警察局和当地帮派之间进行，目标车辆是一辆缓慢行驶的面包车. |
| [Area 51](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/area51.pwn) | 这是一种进攻游戏模式，攻击者必须通过跳伞闯入 69 区，而军方和科学家则进行防守。在该游戏模式中，69 区被称为 51 区（其真实原型位于内华达州）. |
| [Freighter](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/freighter.pwn) | 51 区模式的水上版本，三合会必须使用快艇和直升机闯入敌对帮派（岘港男孩）的货运船. |
| [Manhunt-LV](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/manhunt-lv.pwn) | 其中一名玩家被选为 “被狩猎对象”，其他人必须追上并杀死他。杀死 “被狩猎对象 ”的人自己也会成为 “被狩猎对象”. |
| [LS Parachute](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/ls-parachute.pwn) | 一个有趣的游戏模式，除了从高楼跳伞外没有其他目标--受到制作游戏视频的人的欢迎 |
| [Minigun Madness](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/minigunmadness.pwn) | 这是另一种有趣的模式，让玩家从标准的基于目标的游戏模式中解脱出来。所有玩家都被关在一个小院子里进行自由混战，只能用加特林防卫。 |
| [Monster](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/monster.pwn) | 一种自由模式，每个人都会在沙漠简易机场出生，只有怪物卡车(monster)可以作为交通工具。在私人 Beta 测试期间很受欢迎，以展示游戏的稳定性和同步性 |
| [Sniper Madness](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/sniper.pwn) | 每个人都有一把狙击步枪互相击杀的游戏模式。是对新的 SA-MP 0.2 的狙击步枪支持的某种演示. |
| [RC Barnstorm](https://github.com/Li-ght/SA-MP-Official-Game-Mode/blob/main/barron.pwn) | 每个人都要控制一辆遥控Baron的游戏模式。是对新的 SA-MP 0.2 版遥控车支持的某种演示. |


# open.mp(Open Multiplayer)

### 什么是 open.mp？
open.mp (Open Multiplayer, OMP) 圣安地列斯的多人游戏模组，是为了应对 SA:MP 的更新和管理问题的不幸增加而推出的，SA:MP客户端可以连接到此服务器，将来将提供新的open.mp客户端，从而可以发布更多有趣的更新

### open.mp下载地址
[open.mp服务端下载地址](https://github.com/openmultiplayer/open.mp/releases)
[open.mp启动器下载地址](https://github.com/openmultiplayer/launcher/releases/tag/v1.0.0)

### open.mp是SA:MP的分支吗?
不是，这是一次利用的几十年的知识和经验进行的彻底的重写，之前有人试图制作SA:MP分支版本，但我们认为有两个主要的问题：

它们基于泄露的SA:MP源代码，这些作者对于这部代码没有合法权利，因此在道德和法律上总是处于劣势。我们坚决拒绝使用此代码，虽然这略微阻碍了发展速度，但从长远来看是最正确的举措
他们试图重新开发太多内容，要么替换所有的脚本引擎，要么在添加新功能的同时删除功能，要么只是以不兼容的方式进行修改调整，这会给很多庞大的服务器迁移造成很大的阻碍，因为如果他们要迁移，必须重写部分代码，这是一项艰巨的任务。
我们打算随着时间的推移添加功能和调整，但我们也专注于支持现有的服务器，允许他们在不更改代码的情况下使用我们的代码

### 为什么要开发open.mp
尽管测试团队以建议、劝说和提供帮助的形式，多次尝试推动 SA:MP 的官方开发; 社区中的人们也对任何新事物都充满了渴望; 但还是完全看不到任何进展。大多数人普遍认为只是因为联机模组领导层失去了兴趣，但这并不是主要的问题，主要问题是没有其他人能够继续开发。
创始人并没有把开发权交给那些有兴趣继续开发联机模组的人，而是只想把所有的事情都拖垮，而显然用最少的努力就可以把事情拖得很久。有些人声称这是因为被动收入，但没有证据表明这一点。尽管我们有着巨大的兴趣和像家一样强大的社区，但创始人仍然认为联机模组只剩下 1-2 年的时间了，社区如此努力地运作却使 SA:MP 成为今天的样子，不值得继续下去，但我们并不这么认为。可前往[B站视频](https://www.bilibili.com/video/BV18s4y1S7qz)查阅详情

### 你对于Kalcor/SA:MP有什么看法
我们喜欢SA:MP，这就是我们来到这里的首要原因-这点要归功于Kalcor，多年来，他为SA:MP做了大量的工作，这一贡献不该被遗忘和忽视，导致open.mp开发行动的原因，是因为我们不同意最近的几项决定，尽管我们一再试图引导SA:MP朝着不同的方向发展，但似乎都没有得到任何解决方案或回应，因此我们被迫做出了一个不幸的决定，试图在没有Kalcor的情况下继续保持SA:MP的精神。这不是对他个人采取的行动，也不应该被视为是对他的一种攻击行为，我们不会容忍任何人对任何人的人身侮辱，无论他们在open.mp问题上的立场如何，我们都应该在不进行人身攻击的情况下合理的辩论

### 开发open.mp难道不是在分裂社区吗?
这不是我们的意图，在理想情况下，没有任何理由会导致社区分裂，但分裂也好过让社区枯萎。事实上，自从open.mp公布以来，大量非英文社区已经和英文社区开始接触，然而在以前，他们还在慢慢地被排挤边缘化，所以他们重新融入实际上反而是将一个分裂的社区重新团结在一起，大量用户被禁止进入SA:MP论坛(在某些情况下，他们的帖子被清除)，但Kalcor本人指出，官方论坛不是SA:MP论坛，只是SA:MP的一部分，许多玩家和服务器所有者从未在这些论坛上发帖，甚至从未加入过这些论坛，因此，再次与这些人联系将使更多的社区成员团结起来

### 改进和新增内容?
> open.mp完全向后兼容，现有的SAMP客户端能够连接服务器，同时添加额外的功能，旨在构建1:1的SA:MP服务端还原
* 许多古老众所周知的SAMP错误和BUG已被修复(可参考[sa-mp fixes](https://github.com/pawn-lang/sa-mp-fixes))
* 包含大量安全、游戏行为和脚本修复
* 更高效的性能和效率，更现代化、且优雅的开发体验
* 也将会有新的open.mp客户端体验更有趣的内容
* 同时支持0.3.7和0.3DL客户端
* 内置了超过150个[YSF](https://github.com/IS4Code/YSF/wiki/Natives)的native功能，可前往[open.mp功能列表](https://www.open.mp/docs/server/omp-functions)了解详情
* 许多功能加入和大量原生功能升级，更多函数添加{Float, _}:...format的支持
* 关于标签矫正以及[const矫正](https://github.com/pawn-lang/compiler/wiki/Const-Correctness)的规范性
* 包含最新版本编译器3.10.12，新增功能包含见[此处](https://github.com/pawn-lang/compiler/wiki/What's-new)，修复了原版3.2.3664的所有[已知错误和BUG](https://github.com/pawn-lang/compiler/wiki/Known-compiler-bugs)，同时能检测到更多你代码里的问题或者需要改善的地方，为 SA：MP 社区提供更好的开发体验
* 新的Pawn编辑器[qawno编辑器](https://github.com/Zeex/qawno)包含在其中
* 符号长度限制增加到了64，你不再需要缩写你的函数名，同时一些原生的sa-mp函数名的缩写也变为了阅读性更好的全称，如GetRandomCarColPair变为GetRandomVehicleColourPair，以及更加规范的命名

### SA:MP兼容性
虽然这个项目的目标是与现有的SA:MP服务器的功能接近，使移植变得容易（在我们可以开始做更有趣的事情之前，我们有很多很多的想法），但100%的兼容性是不可能的。原因很简单--SA:MP服务器有错误*。复制这些错误是愚蠢的--
这个项目的另一个目标是修复和改进服务器。因此，这些目标必须得到平衡，虽然我们相信我们已经在维护向后兼容性方面做得很好，但仍有一些地方原来的行为不太正确（或根本就是坏的），我们已经从fixes.inc中得到了语义方面的启发。如果你想了解这些变化的完整列表，你可以查看fixes.inc的readme（那些已经在使用该include的人现在可以删除它），但有几个值得注意的变化被反复提起。

### open.mp其它问题解答
> 重要的事情说三遍，open.mp和samp服务器开发完全一致，open.mp和samp服务器开发完全一致，open.mp和samp服务器开发完全一致
* 如果你先前有开发过SA:MP服务器的经验，或者你不是一个小白，请不要再问open.mp怎么开发服务器诸如此类的低端且空泛的问题，因为这会让你显得是个小白，而我不希望解答一些你可能原本就清楚的问题，以免浪费彼此的时间和精力
* 如果你是个小白，你希望能创建一个游戏模式，自己创造玩法并和朋友/陌生人一起玩耍，那你可以随意提问，我们也会耐心提供帮助
* 虽然我很不想用“相当于samp的版本更新”去形容open.mp，因为open.mp完全从零开发的，而不是基于泄露的samp源代码更新，部分人可能会因为两者名称的不同而觉得陌生。
* open.mp目前对于玩家而言无任何区别，请不要再问手机能不能玩omp服务器，最终版能不能玩omp服务器，这里统一回复，对于玩家而言只要能玩samp就能玩omp，并且无需做出任何改变，除非open.mp为了能够实现需要客户端配合的功能，否则，玩家照旧使用SA:MP客户端进行GTASA联机
* open.mp服务器支持中文昵称进入吗？你可以暂时通过在脚本中添加以下代码，让你的服务器支持中文名，而不需要任何插件，后续请等待open.mp内置昵称字符的支持
  ```pawn
  for (new i = 0; i <= 255; i++) {
      if (!IsNickNameCharacterAllowed(i))
        AllowNickNameCharacter(i, true);
    }
  ```

### 手机安卓版SA:MP
目前市面上SAMP安卓客户端app使用了从SA:MP团队窃取的源代码开发完成，因此这不在我们的讨论范围之内

### open.mp历程简要概述
* 2019年初 open.mp项目启动，并在曝光后获得了大量关注
* 2021年6月 经历3年实验和改写，操之过急的工作给管理、团队和代码库带来了一些问题，我们实施的功能强大同时也很复杂，难以继续，这样我们很难按照正确的路线走下去，2021年6月，open.mp团队决定开始重写，目标是建立一个1:1的向后兼容SA:MP的程序
* 2022年1月 首次尝试测试第一个版本，并支持PC端、GTASA最终版、安卓端同时游玩一个服务器 详情请看[Youtube视频](https://www.youtube.com/watch?v=-PWXXvHe35M)
* 2022年4月20日 open.mp正式进入公开测试版，这是项目开源和正式版发布前的最后一步，请注意，这只是SA:MP服务器替代项目，我们的客户端仍在开发中，还有很长的路要走
* 2022年5月10日 open.mp beta4发布
* 2022年7月11日 open.mp beta6发布
* 2022年8月13日 open.mp beta8发布
* 2022年9月7日 open.mp beta9发布 并同时支持SA:MP 0.3DL的所有功能，同时支持0.3.7和0.3DL客户端进入服务器
* 2022年9月11日 open.mp新版本发布
* 2023年1月6日 经历4年开发，两次重写，无数争论和阻碍，open.mp候选版本(RC1)发布
* 2023年1月10日 open.mp正式开源
* 2023年11月11日 open.mp正式版v1.1.0.2612发布，open.mp启动器(不要跟客户端混淆)发布
* 2024年1月29日 open.mp v1.2.0.2670发布 open.mp启动器1.0重新设计并发布
* 2024年4月5日 [FCNPC(完全可控的NPC插件)](https://pd.qq.com/s/fnhuny9rs)的open.mp版本正式开发，敬请期待
  
### 感谢open.mp团队的每一位成员
* Amir
* Cheaterman
* Freaksken
* Graber
* Hual
* Josh
* JustMichael
* kseny
* Nexius
* pkfln
* Potassium
* Southclaws
* TommyB
* Y_Less
* Zeex

# 教程与帮助
本教程将使用[SC-RP(South Central Roleplay by Emmet)](https://github.com/seanny/SC-RP)作为例子，一步步告诉大家如何把自己手里的sa-mp服务器转为open.mp服务器

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/d9ea03f5a2804ad1b56d997683c4ca1f.jpeg#pic_center)

### 编写脚本的编辑器推荐

顺带提一下，这边推荐使用[VS Code](https://code.visualstudio.com/)(Visual Studio Code)作为你编写脚本的编辑器，以便于接下来的操作能进行快速查找、跳转、编辑等等

VS Code的使用教程点击[此处](https://tieba.baidu.com/p/8035593934)查看

### 阅读此教程之前 你需要知道一下几点关键信息
- 从sa-mp转向open.mp并不是一件困难的事情，但很多人似乎对于这两者之间的区别有较大的误解，为了让接下来的步骤能顺利进行，请先阅读前面提及的一些你可能需要了解的内容，好让自己能够更好的确定是否要升级成open.mp
- 大多数老的开源图，使用了旧版的[YSI](https://github.com/pawn-lang/YSI-Includes)，不管你是否升级到open.mp，此项升级是相当必要的
- [YSI](https://github.com/pawn-lang/YSI-Includes)，是 SA:MP/Pawn 历史最悠久、规模最大、经过大量测试且支持性最好的库，提供了大量的新游戏和语言功能，几乎每个服务器都在使用此库所提供的功能进行开发，因此本教程也会顺带提一嘴关于YSI的更新问题
- 关于open.mp插件的兼容问题（不支持内存黑客插件），很多人可能会有负面的一些看法，你是否应该使用内存黑客插件，老实说，这是一个灰色地带，使用内存黑客来钩住回调或函数似乎可以接受，但任何修改服务器内存的操作似乎都是禁止的，关于插件开发请前往[open.mp插件指南](https://www.open.mp/docs/tutorials/PluginDevelopmentGuide)，对于插件的使用需求，因人而异，你应该就open.mp与samp的优劣对比，认真考虑你所使用的插件是否是必要的
- SAMP已成为过去式，从长远来看，升级能让服务器在某些方面能朝好的方向发展，升级open.mp是一件一劳永逸的事情

### 下载最新版本open.mp服务端
- [open.mp服务端](https://github.com/openmultiplayer/open.mp/releases)

### 插件更新：
- [更新它们] 如果你的服务器有使用到以下这些插件/库，请更新至open.mp版本或者是最新版，下面列表也许不全，有疑问请及时在群里发问
  - [sscanf](https://github.com/Y-Less/sscanf/releases) 将字符串转换为多个值、整数、浮点数、玩家等
  - [Pawn.CMD](https://github.com/katursis/Pawn.CMD/releases) 比任何其他指令处理器都快
  - [Pawn.RakNet](https://github.com/katursis/Pawn.RakNet/releases) 允许您分析 RakNet 流量
  - [YSI](https://github.com/pawn-lang/YSI-Includes) 正如之前所说，不论你正在使用open.mp还是SA:MP，都请更新到最新版
  - [Pawn.Regex](https://github.com/katursis/Pawn.Regex/releases) 在 Pawn 中添加对正则表达式的支持
  - [progress2](https://github.com/Southclaws/progress2/tree/master) 非常方便快捷地创建进度条UI
  - [weapon-config](https://github.com/oscar-broman/samp-weapon-config) 功能强大丰富的武器配置，百分百反锁血，伤害响应迅速
  - [eSelection](https://github.com/TommyB123/eSelection/tree/master) 创建动态模型选择菜单
  - 更多...
- [删除它们] 如果你服务器正在使用以下这些插件/库，现在你可以删除他们了，因为open.mp具备这些功能
  - [YSF](https://github.com/IS4Code/YSF/releases) 它的许多功能现在已经在 open.mp 中实现，详情见[此处](https://github.com/openmultiplayer/open.mp/issues/189)
  - [sa-mp-fixes](https://github.com/pawn-lang/sa-mp-fixes) 对SA:MP服务器的大量错误进行了优化修复，即插即用
  - [samp-precise-timers](https://github.com/bmisiak/samp-precise-timers/releases) 改善SA:MP的计时器，使其精准，在SA:MP中计时器每秒会有100毫秒左右甚至更多的偏差，比如你设置10秒后发送一条消息，SA:MP可能会在11、12、13秒后才发送
- [更新它们] 其它常用库/插件的更新，现在常用且流行的库/插件很多都已更新，认同并遵循社区对于开发所树立的代码规范，请不要再埋怨，跟上脚步
  - 这些库主要更新的内容除了更新、修复、优化它们本身的内容以外，还做了[标签矫正](https://github.com/openmultiplayer/omp-stdlib/blob/master/documentation/readme-expert.md#more-tags)，[const矫正](https://github.com/openmultiplayer/omp-stdlib/blob/master/documentation/readme-expert.md#const-correctness)，函数变化等等，比如大家很熟悉的[streamer插件](https://github.com/samp-incognito/samp-streamer-plugin)
  - 以防有人找不到下载地址，大家可以直接在Github上搜索，或者前往[open.mp Awesome](https://www.open.mp/docs/awesome)，open.mp官网给大家提供了一系列值得推荐的库/插件/工具等等的列表，本人不建议大家继续使用一些过时且偏门的插件和库，请自行做取舍
- [舍弃它们] 请舍弃那些已过时、不足够安全、易破解的玩家密码加密插件
  - 很多服务器对玩家的密码未经过加密处理，任何人都有可能直接看到玩家密码，这是非常不道德的
  - 以及服务器所使用的加密方式已过时、不足够安全、易破解，这都是对你服务器里的玩家不负责的行为
  - 如果你正在使用那些加密方案,如: `SHA256` 等等，甚至完全没有任何加密处理，请及时替换成更安全的[samp-bcrypt](https://github.com/Sreyas-Sreelal/samp-bcrypt/)
  - 玩家在注册时请不要在那些服务器使用自己常用密码或涉及隐私的信息，因为它们随时可能会被泄露

  
### 为什么分open.mp版插件和SA:MP插件
你只需要知道open.mp版的插件直接放进`components`文件夹即可，其它插件放进`plugins`文件夹，就像SA:MP服务器一样，而放进`components`文件夹的open.mp插件会在服务器启动的时候自动加载，无需写进服务器配置里

### open.mp服务端和SA:MP服务端的区别

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/777d29338294427f8e40011dda371e50.png#pic_center)

|   | open.mp | SA:MP |
| :-- | :-- | :----- |
| 区别 |   |   |
| 启动服务器 | omp-server.exe | samp-server.exe |
| 服务器配置 | config.json | server.cfg |
| 插件 | omp版本插件放在components文件夹，其它插件放在plugins文件夹 | 统一放在plugins文件夹 |
| 编译器 | qawno文件夹 | pawno文件夹 |
| 一致 |   |   |
| 游戏模式 | 放至gamemodes文件夹 | 放至gamemodes文件夹 |
| 脚本 | 放至filterscripts文件夹 | 放至filterscripts文件夹 |
| 脚本文件 | scriptfiles文件夹 | scriptfiles文件夹 |
| 自定义model | models文件夹 | models文件夹 |

所以文件结构尽管有一点小的区别，但大家是很熟悉的且秒懂的

### 文件迁移和config.json配置
根据上面的文件结构，把你的文件进行复制转移即可，这里唯一值得讲解的地方只有config.json。见[JSON百度词条](https://baike.baidu.com/item/JSON/2462549?fr=ge_ala)

![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/dce04f8a7a794bb1bfde4dcc19b8beb7.png#pic_center)

为什么server.cfg里有写sscanf插件，而config.json没有呢，正如我上面所说，sscanf可以放在components文件夹自动加载，而无须进行配置

大家可以看到，以往server.cfg的对应信息的配置，可以通过名称很快地找到config.json相应的位置

并且config.json提供了大量可自定义配置的选项，不需要焦虑，保持默认设置即可，除非你知道你在干什么，一般通过名称即可知道其功能作用

- 常用的比如：
- "network" : "port" 服务器端口
- "network" : "allow_037_clients" 是否允许0.3.7客户端进入服务器
- "max_bots" 最大NPC数量
- "max_players" 最大玩家数量
- "map" 地图名称
- "mode" 模式名称
- "website" 服务器网址
- "password" 服务器密码
- "artwork" : "enable" 是否启用自定义模型功能(也就是0.3DL功能)
- "exclude" 如果你不想加载components文件夹里的某个插件，你可以在此处排除它们
  
更多关于config.json的详情见[此处](https://www.open.mp/docs/server/config.json)，这边不一一赘述

### 兼容性
SC-RP(South Central Roleplay by Emmet)是几年前的源码，本人没有对SC-RP进行open.mp端的重新编译，仅仅只是更新了插件和库，直接把SA:MP版本的amx文件复制进open.mp服务端里，open.mp仍然可以正常开启服务器并游玩

这也恰恰证明了open.mp向后兼容性的强大之处，也证明了open.mp开发和SA:MP开发保持的一致性，以便于人们对自己服务器的迁移工作，因此如上面所说，非小白人员不要浪费彼此的时间问open.mp服务器怎么开发

但是为了做教程，下面依旧会讲解关于如何处理重新编译后的警告和代码规范矫正，以及其它问题的讲解，如果你是个有经验的开发人员，可以自行前往 [标签矫正](https://github.com/openmultiplayer/omp-stdlib/blob/master/documentation/readme-expert.md#more-tags)，[const矫正](https://github.com/openmultiplayer/omp-stdlib/blob/master/documentation/readme-expert.md#const-correctness)，[open.mp功能列表](https://www.open.mp/docs/server/omp-functions)，以及服务端`qawon/include`里的inc文件了解详情，自行修改优化自己的代码

### 回调与函数名称的变化

##### 一些回调的变化

你需要前往`qawno/include`文件夹查看open.mp提供的inc里的原型名称

> TIPS: 如果你使用的是VS Code作为你的代码编辑器，你应该能很快地能跳转并查到到标题原型 `快捷键: Ctrl + 鼠标左键` 点击报错的回调/函数名称

```pawn
// 错误：error 025: function heading differs from prototype
// 意思是函数标题与原型不同，应该改为和原型一致，下面举几个例子

// 错误
public OnPlayerStateChange(playerid, newstate, oldstate)
// 改为
public OnPlayerStateChange(playerid, PLAYER_STATE:newstate, PLAYER_STATE:oldstate)

// 错误
public OnPlayerEditAttachedObject(playerid, response, index, modelid, boneid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ)
// 改为
public OnPlayerEditAttachedObject(playerid, EDIT_RESPONSE:response, index, modelid, boneid, Float:fOffsetX, Float:fOffsetY, Float:fOffsetZ, Float:fRotX, Float:fRotY, Float:fRotZ, Float:fScaleX, Float:fScaleY, Float:fScaleZ)

// 错误
public OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
// 改为
public OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys)

//此外还有
public OnPlayerDeath(playerid, killerid, reason)
public OnPlayerDeath(playerid, killerid, WEAPON:reason)

public OnPlayerDeath(playerid, killerid, reason)
public OnPlayerDeath(playerid, killerid, WEAPON:reason)

public OnPlayerWeaponShot(playerid, weaponid, hittype, hitid, Float:fX, Float:fY, Float:fZ)
public OnPlayerWeaponShot(playerid, WEAPON:weaponid, BULLET_HIT_TYPE:hittype, hitid, Float:fX, Float:fY, Float:fZ)

public OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid)
public OnPlayerTakeDamage(playerid, issuerid, Float:amount, WEAPON:weaponid, bodypart)

// 更多...
```

##### 一些 native 的变化

open.mp 对于部分API有新的设计和命名改进，许多库和插件已经采用的命名方案的改进版，比如缩写变成全称，命名规范改善等等

> TIPS: 大部分编辑器可以使用 ctrl + h 进行一键替换

```pawn
// 警告：warning 234: function is deprecated (symbol "xxxxxxxxx") Use `xxxxxxxxx`
// 表示函数名字已弃用，虽然你可以继续使用此函数名称，不影响编译结果，但是建议进行更换

// 如
PlayerTextDrawColor
// 改为
PlayerTextDrawColour

// 如
GetServerVarAsInt
// 改为
GetConsoleVarAsInt

// 此外还有
GetPlayerDialog
--> GetPlayerDialogID

GetVehicleTower
--> GetVehicleCab

GetRandomCarColPair
--> GetRandomVehicleColourPair

GetPlayer3DTextLabelDrawDist
--> GetPlayer3DTextLabelDrawDistance

// 如带format功能的 GameTextForAllf
GameTextForAllf
// 现统一使用 GameTextForAll ，因为open.mp的此类函数自带 format 功能
GameTextForAll
```

### 警告与错误

警告不是错误，如果你收到警告，它们表示可能会有问题，但你的代码仍然可以编译和运行，警告的目的是防止出现错误，以免代码在某些情况下无法按照您的预期运行--您的代码仍然可以编译，警告只是一条信息，很多人认为，警告意味着代码没有编译，或者运行时会有不同的表现。

> 也许刚开始编译你会收到大量(上千条)警告，但是不必惊慌，有许多的内容只需要简单的修改一次，便可以让大量警告消失

##### 1. user warning: Using <a_samp> legacy wrapper.  Include <open.mp> directly.

`a_samp`头文件已弃用，请改为`open.mp`作为头文件

```pawn
#include <open.mp>
```

##### 2. warning 213: tag mismatch: expected tag "xxxx", but found none ("_")
如下面这行代码会引起警告：
```pawn
PlayerTextDrawFont(playerid, PlayerData[playerid][pTextdraws][21], 1);
```
让我们先看看 `omp_textdraw.inc` 里关于`PlayerTextDrawFont`函数的说明：
```pawn
native bool:PlayerTextDrawFont(playerid, PlayerText:textid, TEXT_DRAW_FONT:font);
```
这里的font前面加了一个`TEXT_DRAW_FONT`标签，open.mp提供了关于以下6种font的定义，分别代表(0-5)，为什么要设置这类型的标签，因为SAMP关于Textdraw的可用字体只有0-5，也就是有范围的

```pawn
TEXT_DRAW_FONT_0
TEXT_DRAW_FONT_1
TEXT_DRAW_FONT_2
TEXT_DRAW_FONT_3
TEXT_DRAW_FONT_SPRITE_DRAW
TEXT_DRAW_FONT_MODEL_PREVIEW
```

比如：在SA:MP中如果你使用了字体6，编译器不会有任何警告，然后你进入游戏发现Textdraw显示不出来，你又不知道问题出在哪里，在这种情况下，编译器会给提前告知你问题所在，并让你使用他们所提供的定义去设置Textdraw的字体类型，你可能会觉得多余，因为你本身能够确保自己不会使用0-5以外的字体

你要知道，除了字体以外，还有很多很多的关于范围的限制，比如`武器ID`，`Textdraw对齐方式`，`动作同步`，`玩家状态`等等，又或者是`true`/`false`的判定，只有`真 1`和`假 0`，不会出现`又真又假 2`，`真真假假 3`的条件

亦或者经验不足的开发人员也许并不像你这样能确保代码没问题。当脚本代码庞大，你/其它开发人员不小心填写了超出SAMP支持范围内的数据，SA:MP编译器不给你任何警告，游戏内又无法正常运行你的脚本，在你不牢背这些范围的情况下，你如何能快速发现并解决问题，更重要的是，这是一种很好的习惯和规范。

标签规范也包括让传递数值的类型保持一致，比如大家熟悉的SA:MP里的标签 `Text`,`PlayerText`,`bool`,`Text3D:`, open.mp新增了 `WEAPON`,`PLAYER_MARKERS_MODE`,`PLAYER_STATE`,`SPECIAL_ACTION`,`FIGHT_STYLE`,`KEY`等等，不一一列举

解决方式：
```pawn
// 警告 warning 213: tag mismatch: expected tag "t_TEXT_DRAW_FONT", but found none ("_")
PlayerTextDrawFont(playerid, PlayerData[playerid][pTextdraws][21], 1);
// 改为
PlayerTextDrawFont(playerid, PlayerData[playerid][pTextdraws][21], TEXT_DRAW_FONT_1);
```

诸如此类的警告还有（不一一列举）：

```pawn
// 警告 warning 213: tag mismatch: expected tag "t_SPECIAL_ACTION", but found none ("_")
SetPlayerSpecialAction(playerid, 68);

// 改为
SetPlayerSpecialAction(playerid, SPECIAL_ACTION_PISSING);
```

```pawn
// 警告 warning 213: tag mismatch: expected tag "bool", but found none ("_")
// 警告 warning 213: tag mismatch: expected tag "t_FORCE_SYNC", but found none ("_")
ApplyAnimation(playerid, "KISSING", "Grlfrd_Kiss_01", 4.1, 0, 0, 0, 0, 0, 1);

// 改为
ApplyAnimation(playerid, "KISSING", "Grlfrd_Kiss_01", 4.1, false, false, false, false, 0, SYNC_ALL);
```
![在这里插入图片描述](https://i-blog.csdnimg.cn/direct/3a0df4d2f40b4b46a45aa8164bd955cb.png#pic_center)


关于武器的定义本人还是挺喜欢的，因为我记不住25，22，5，9 到底是什么武器的ID，改用定义之后，可以很清楚知道我给予了玩家什么武器，即便过了很久返回去查阅代码，也能一目了然

> TIPS: 如果大家使用VS Code，只需要输入WEAPON_ 其自动补充功能会列举出武器列表，如上图所示。

```pawn
// 警告 warning 213: tag mismatch: expected tag "t_WEAPON", but found none ("_")
GivePlayerWeapon(playerid, 25, 20000);
// 改为
GivePlayerWeapon(playerid, WEAPON_SHOTGUN, 20000);
```

```pawn
// 警告 warning 213: tag mismatch: expected tag "t_WEAPON_SLOT", but found none ("_")
// 警告 warning 213: tag mismatch: expected tag "t_WEAPON", but found none ("_")
new weaponid, ammo;
for (new i = 0; i < 13; i ++)
{
    GetPlayerWeaponData(playerid, i, weaponid, ammo);
}

// 改为
new WEAPON:weaponid, ammo;
for (new WEAPON_SLOT:i; i <= WEAPON_SLOT_DETONATOR; i ++) // WEAPON_SLOT_DETONATOR 代表 12 因此是 <=
{
    GetPlayerWeaponData(playerid, i, weaponid, ammo);
}
```

```pawn
// 警告 warning 213: tag mismatch: expected tag "t_KEY", but found none ("_")
if (newkeys & 16)

// 改为
if (newkeys & KEY_SECONDARY_ATTACK)
```

警告: warning 213: tag mismatch: expected tag "bool", but found none ("_")

```pawn
// 警告: warning 213: tag mismatch: expected tag "bool", but found none ("_")
SetPlayerControllable(playerid, 1);

// 改为:
SetPlayerControllable(playerid, true);
```

```pawn
// 警告: warning 213: tag mismatch: expected tag "bool", but found none ("_")
new engine, lights, alarm, doors, bonnet, boot, objective;
GetVehicleParamsEx(CarData[carid][carVehicle], engine, lights, alarm, doors, bonnet, boot, objective);
SetVehicleParamsEx(CarData[carid][carVehicle], engine, lights, alarm, 1, bonnet, boot, objective);

// 改为:
new bool:engine, bool:lights, bool:alarm, bool:doors, bool:bonnet, bool:boot, bool:objective;
GetVehicleParamsEx(CarData[carid][carVehicle], engine, lights, alarm, doors, bonnet, boot, objective);
SetVehicleParamsEx(CarData[carid][carVehicle], engine, lights, alarm, true, bonnet, boot, objective);
```
##### 3. warning 213: tag mismatch: 依旧是标签问题，但是是自定义函数或变量
比如:
```pawn
enum playerData {
    pGuns[13]
};
new PlayerData[MAX_PLAYERS][playerData];

stock GetWeapon(playerid)
{
	new weaponid = GetPlayerWeapon(playerid);

	if (1 <= weaponid <= 46 && PlayerData[playerid][pGuns][g_aWeaponSlots[weaponid]] == weaponid)
 		return weaponid;

	return 0;
}
```
应该改为以下内容，以告诉编译器或人们pGuns是用于储存武器ID的变量，GetWeapon函数返回的结果是武器ID
```pawn
enum playerData {
    WEAPON:pGuns[13]
};
new PlayerData[MAX_PLAYERS][playerData];

stock WEAPON:GetWeapon(playerid)
{
	new WEAPON:weaponid = GetPlayerWeapon(playerid);

	if (WEAPON_BRASSKNUCKLE <= weaponid <= WEAPON_PARACHUTE && PlayerData[playerid][pGuns][g_aWeaponSlots[weaponid]] == weaponid)
 		return weaponid;

	return WEAPON_FIST;
}
```
紧接上面，还有：
```pawn
if (PlayerData[userid][pGuns][g_aWeaponSlots[weaponid]] != 0)
	return SendErrorMessage(playerid, "That player has a weapon in the same slot already.");

// 改为
if (PlayerData[userid][pGuns][g_aWeaponSlots[weaponid]] != WEAPON_FIST) // WEAPON_FIST 即是拳头的定义
	return SendErrorMessage(playerid, "That player has a weapon in the same slot already.");

// 或者改为
if (PlayerData[userid][pGuns][g_aWeaponSlots[weaponid]] != WEAPON:0) // 但显然上面的写法更优雅 虽然麻烦了点
	return SendErrorMessage(playerid, "That player has a weapon in the same slot already.");
```
#####  3.1 数据类型错误也包含以下提示，解决方式和以上类似
> error 035: argument type mismatch (argument 4)
##### 4. 常量矫正

warning 239: literal array/string passed to a non-const parameter

warning 214: possibly a "const" array argument was intended: "xxxx"

意为：字面数组/字符串传递给非const参数, 可能要使用 `const` 数组参数

const表示变量不能修改，告诉编译器和开发人员，保证它在任何（有效）情况下都不能修改它，这就是所谓的常量正确性--在数据不会被修改时使用const，而在参数会被修改时不使用const。这主要只对字符串和数组有用，这样的一个const语义有时候会帮你避免一些开发时候出现的问题，帮你编写更安全可靠的代码

```pawn
stock ShowPlayerFooter(playerid, string[]) {
	PlayerTextDrawSetString(playerid, PlayerData[playerid][pTextdraws][39], string);
	PlayerTextDrawShow(playerid, PlayerData[playerid][pTextdraws][39]);
}

// 警告：warning 239: literal array/string passed to a non-const parameter
// 所有使用到此函数的地方都会提示一条警告
ShowPlayerFooter(playerid, "You have ~g~purchased~w~ a house!");
```
当你传递字符串给`ShowPlayerFooter`这个函数后，中途该字符串不会经过任何修改直接，直接以Textdraw形式向玩家显示，而`ShowPlayerFooter`缺少了const，则会提示警告，应该改为如下内容：
```pawn
stock ShowPlayerFooter(playerid, const string[])
```
此项修正也可以修复错误：error 035: argument type mismatch (argument 2)

##### 4.1 error 035: argument type mismatch (argument 2)
如上

##### 5. error 021: symbol already defined:
前面提到过，open.mp提供了许多新的函数功能，因此你的SA:MP脚本中可能会有一些自定义的函数和open.mp提供的函数重名了，在确保你的自定义函数的功能和open.mp提供的功能一致的情况下，删除你自己的自定义函数，改为使用open.mp的函数。否则请把你的函数名以及使用到该函数的地方修改成其它的名称
```pawn
// 比如 SC-RP 里有一个 GetVehicleDriver 的函数，并且其功能效果和open.mp完全一致，删除它即可，open.mp自带这功能
GetVehicleDriver(vehicleid) {
	foreach (new i : Player) {
		if (GetPlayerState(i) == PLAYER_STATE_DRIVER && GetPlayerVehicleID(i) == vehicleid) return i;
	}
	return INVALID_PLAYER_ID;
}
```
```pawn
// 比如 SC-RP 里有一个 IsPlayerSpawned 的函数，但是此函数里有一个 PlayerData[playerid][pKilled] 是否被杀的判定
// 这个时候你应该修改此函数名而不是删除它，比如修改成 IsPlayerSpawnedEx
stock IsPlayerSpawned(playerid)
{
	if (playerid < 0 || playerid >= MAX_PLAYERS)
	    return 0;

	return (!PlayerData[playerid][pKilled]) && (GetPlayerState(playerid) != PLAYER_STATE_SPECTATING && GetPlayerState(playerid) != PLAYER_STATE_NONE && GetPlayerState(playerid) != PLAYER_STATE_WASTED);
}

// 修改为
stock IsPlayerSpawnedEx(playerid)
```

##### 6. omp-server.exe 控制台警告提示
```
[Warning] Legacy key `hostname` supplied, using `name`
[Warning] Legacy key `weburl` supplied, using `website`
```
只需要按照提示修改即可，这里是指修改rcon指令的名称：
```pawn
#define SERVER_NAME    "[0.3.7] South Central Roleplay - www.scroleplay.net"
#define SERVER_URL     "www.scroleplay.net"

//SA:MP
new rcon[80];
format(rcon, sizeof(rcon), "hostname %s", SERVER_NAME);
SendRconCommand(rcon);
format(rcon, sizeof(rcon), "weburl %s", SERVER_URL);
SendRconCommand(rcon);

// 改为open.mp的写法
// 这里不需要跟上面一样进行format处理，open.mp有大量函数自带format功能，非常方便快捷，如下所示：
SendRconCommand("name %s", SERVER_NAME);
SendRconCommand("website %s", SERVER_URL);
```

##### 7. warning 240: assigned value is never used (symbol "xxxx")

意为某变量从未使用的警告

但是你确实在使用此变量，编译器却给你发出警告

方案一：这时候条件允许的情况下，尝试把变量改为静态变量
```pawn
// 修改为静态变量
new var;
--> static var;
```
方案二：或者暂时禁用诊断，`#pragma warning push/disable 240/pop`
```pawn
#pragma warning disable 240
```


##### 8. 不要着急
当你的脚本最终把错误修复完成之后，只剩下一些不影响编译结果和功能效果的警告时，你可以在日后的日子里慢慢地调整，同时在创建新的功能玩法时，时刻注意代码规范，养成良好的习惯，有利于代码的可读性、代码的安全性、多人协作、社区开源等等多方面

# 结尾
推荐大家加入我们[QQ群](https://qm.qq.com/q/hgf1H1bReg)和[QQ频道](https://pd.qq.com/s/3upf7y7oo)以获得最新资讯和支持，打造互相探讨学习交流的净地

此篇文档的版本号为1.0，是首版本，因此可能会有纰漏的部分，后续发现问题将会更新，如果你发现以上教程无法解决你的某些问题，请及时和本人联系。
