# syntax=docker.io/docker/dockerfile:1.4
FROM node:23.3.0-bookworm-slim as base

FROM base as builder

# install git and python3
RUN <<EOF
apk update
apk add --no-cache g++ git make python3
rm -rf /var/cache/apk/*
EOF

WORKDIR /app

# build app
COPY . .
RUN yarn install --non-interactive
RUN yarn build

# runtime
FROM base

WORKDIR /app

# copy yarn build
COPY --from=builder /app .

ENTRYPOINT ["npx", "hardhat"]
CMD ["deploy", "--network", "localhost"]
