## Testing

The usual extension testing process applies:

    make clean && make install && make installcheck

We can also test the binary send/receive functions:

    make bincheck

## Release

    make update-version
    make tag-version
    git push --follow-tags
