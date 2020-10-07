# 神記事

https://qiita.com/Colk-tech/items/8d4b28b9001b862eeb99

# Git

バージョン管理ツール。

- 変更の保存（バックアップ）

- 変更の可視化（誰が何を変更したか）

などの機能がある。

# GitHub

Gitを共有するためのサービス。

- Issue/PRなどのプロジェクト管理

- コードレビュー（コードの指摘や承認）

など多彩な機能がある。

# コマンド

```shell
# 機能を新しく追加したいときはブランチを作る 名前はadd-new-funcのように目的を書く
git branch (ブランチの名前)
# ブランチを移動する (デフォルトのブランチはmasterと呼ばれる)
git checkout (ブランチの名前)
```

```shell
# GitHubに自分のPCの状態を同期させる
git push origin master
# GitHubの状態を自分のPCに同期させる 作業中ならcommitを終わらせてから行うこと
git pull origin master
```

```shell
# Gitに新しく作ったファイルを認識させる
git add .
# Gitに現在の状態を保存する
git commit -m "○○を実装した/○○を変更した など何をしたかを書く"
```

# GitHub上の操作

https://qiita.com/isso0424/items/6fc09a68bf0011dfc922

# 備考

- 目的のファイル以外は変更をしないこと。必要があるなら最小限にする。
- commitはこまめにしてくれると嬉しいです。