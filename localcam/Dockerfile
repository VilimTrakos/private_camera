# kamstream-build (armel gcc + qemu) plus the ARM C headers it lacks.
FROM kamstream-build
RUN apt-get update && apt-get install -y --no-install-recommends libc6-dev-armel-cross \
    && rm -rf /var/lib/apt/lists/*
