# conan-action

[![ci](https://github.com/offa/conan-action/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/offa/conan-action/actions/workflows/ci.yml)
[![GitHub release](https://img.shields.io/github/release/offa/conan-action.svg)](https://github.com/offa/conan-action/releases)
[![License](https://img.shields.io/badge/license-MIT-yellow.svg)](LICENSE)

GitHub Action for Conan-based projects.

Provides Conan installation and setup with up-to-date compiler support.

### Included Settings File

The action includes a built-in `settings_user.yml` with support for latest GCC, Clang, and MSVC. It is automatically installed during the Conan setup step.

### Recommendation

Instead of using a tag or branch, pinning to a full-length commit is recommended.
[Dependabot](https://docs.github.com/en/code-security/dependabot/working-with-dependabot/keeping-your-actions-up-to-date-with-dependabot) helps to keep GH Actions up to date.
