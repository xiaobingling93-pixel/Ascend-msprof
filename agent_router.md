# docs/zh agent读取导航

用途：agent快速路由到 `docs/zh` 下最合适的文档；当需要在线查看仓库文档原文时，也能按规则拼接文件页 URL 或 raw URL。

## 路径规则

### 本地仓库路径拼接

- 中文文档根目录：`docs/zh/`
- 普通文档名默认拼接为：`docs/zh/<filename>`
- 如果只给出文档名且未标注子目录，默认按 `docs/zh/<filename>` 解析
- 如果输入已经是 `docs/zh/...` 相对路径，则直接使用，不要重复拼接成 `docs/zh/docs/zh/...`
- 如果输入包含子目录，例如 `design/<filename>`、`figures/<filename>`，则拼接为 `docs/zh/<subdir>/<filename>`
- `design/` 和 `figures/` 默认不要主动读取，除非用户明确要求查看设计文档或图片

## docs/zh 结构

```text
docs/zh/
├── overview.md                         // 工具是什么、能力范围、简介
├── quick_start.md                      // 快速跑通采集、解析、导出、初步分析
├── msprof_install_guide.md             // 安装、编译、run包、依赖、卸载
├── msprof_parsing_instruct.md          // `msprof --export/--parse/--query/--analyze`等命令使用说明
├── extended_functions.md               // `msprof.py`、设备信息、分片、扩展功能
├── profile_data_file_references.md     // 交付件如`.db`、`.json`、`.csv` 文件和字段含义
├── security_statement.md               // 权限、安全、漏洞、root、umask
├── dir_structure.md                    // 仓库目录、模块位置、源码在哪
├── design/                             // 设计文档，默认不要主动读取
└── figures/                            // 配图，默认不要主动读取
```
